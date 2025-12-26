/*
 * Copyright 2020 Michail Vourlakos <mvourlakos@gmail.com>
 *
 * This file is part of Latte-Dock
 *
 * Latte-Dock is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "waylandwindowmanager.h"
#include <config-appmenu.h>

//Qt
#include <QDebug>
#include <QModelIndex>

// KDE
#include <KWindowSystem>

// Plasma
#include <taskmanager/abstracttasksmodel.h>

#define DELAYEDMENUTIMER 2000

namespace WM {

    WaylandWindowManager::WaylandWindowManager(QObject *parent)
    : AbstractWindowManager(parent)
    {
        // Only run this manager on Wayland
        if (!KWindowSystem::isPlatformWayland()) {
            return;
        }

        m_tasksModel = new TaskManager::TasksModel(this);

        m_delayedApplicationMenuTimer.setSingleShot(true);
        m_delayedApplicationMenuTimer.setInterval(DELAYEDMENUTIMER);
        connect(&m_delayedApplicationMenuTimer, &QTimer::timeout, this, &WaylandWindowManager::onDelayedTimerTriggered);

        m_tasksModel->setFilterByScreen(true);

        // Listen to changes in the task model to update the menu
        connect(m_tasksModel, &TaskManager::TasksModel::activeTaskChanged, this, &WaylandWindowManager::onActiveWindowChanged);
        connect(m_tasksModel, &TaskManager::TasksModel::dataChanged, this, &WaylandWindowManager::onActiveWindowChanged);
        connect(m_tasksModel, &TaskManager::TasksModel::rowsInserted, this, &WaylandWindowManager::onActiveWindowChanged);
        connect(m_tasksModel, &TaskManager::TasksModel::modelReset, this, &WaylandWindowManager::onActiveWindowChanged);

        connect(this, &AbstractWindowManager::screenGeometryChanged, this, [this] {
            m_tasksModel->setScreenGeometry(m_screenGeometry);
        });

        connect(this, &AbstractWindowManager::winIdChanged, this, &WaylandWindowManager::onWinIdChanged);
    }

    WaylandWindowManager::~WaylandWindowManager()
    {
    }

    QModelIndex WaylandWindowManager::findTaskForWinId(const QVariant &wid) const
    {
        if (!wid.isValid()) {
            return QModelIndex();
        }

        for (int i = 0; i < m_tasksModel->rowCount(); ++i) {
            QModelIndex idx = m_tasksModel->index(i, 0);
            bool ok = false;
            // Retrieve WinId list from the task (a task might represent a group, but we check the windows)
            QVariant winIdVariant = m_tasksModel->data(idx, TaskManager::AbstractTasksModel::WinIdList);

            if (winIdVariant.isValid()) {
                QList<QVariant> windows = winIdVariant.toList();
                for (const auto &w : windows) {
                    if (w == wid) {
                        return idx;
                    }
                }
            }
        }
        return QModelIndex();
    }

    void WaylandWindowManager::onActiveWindowChanged()
    {
        if (hasUserWindowId()) {
            // If we are tracking a specific window ID, ignore generic active window changes
            // unless the active window happens to be the one we are tracking (handled by onWinIdChanged logic implicitly)
            // But usually we just want to re-check our specific ID.
            onWinIdChanged();
            return;
        }

        const QModelIndex activeTaskIndex = m_tasksModel->activeTask();

        if (!activeTaskIndex.isValid()) {
            validateApplicationMenu(QString(), QString());
            return;
        }

        const QString objectPath = m_tasksModel->data(activeTaskIndex, TaskManager::AbstractTasksModel::ApplicationMenuObjectPath).toString();
        const QString serviceName = m_tasksModel->data(activeTaskIndex, TaskManager::AbstractTasksModel::ApplicationMenuServiceName).toString();

        validateApplicationMenu(objectPath, serviceName);
    }

    void WaylandWindowManager::onWinIdChanged()
    {
        if (!m_tasksModel || !hasUserWindowId()) {
            return;
        }

        QModelIndex idx = findTaskForWinId(m_userWindowId);

        if (idx.isValid()) {
            const QString objectPath = m_tasksModel->data(idx, TaskManager::AbstractTasksModel::ApplicationMenuObjectPath).toString();
            const QString serviceName = m_tasksModel->data(idx, TaskManager::AbstractTasksModel::ApplicationMenuServiceName).toString();
            validateApplicationMenu(objectPath, serviceName);
        } else {
            // Window not found in model yet
            validateApplicationMenu(QString(), QString());
        }
    }

    void WaylandWindowManager::validateApplicationMenu(const QString &objectPath, const QString &serviceName)
    {
        if (!objectPath.isEmpty() && !serviceName.isEmpty()) {
            setMenuAvailable(true);
            Q_EMIT applicationMenuChanged(serviceName, objectPath);
            setVisible(true);
            Q_EMIT modelNeedsUpdate();
            m_delayedApplicationMenuTimer.stop();
        } else {
            // If we have a user window ID but no menu yet, start the timer to retry/wait
            if (m_delayedMenuWindowId.toInt() < 0) {
                m_delayedMenuWindowId = hasUserWindowId() ? m_userWindowId : 1 /*flag case*/;
                m_delayedApplicationMenuTimer.start();
            }

            setMenuAvailable(false);
            setVisible(false);
        }
    }

    void WaylandWindowManager::onDelayedTimerTriggered()
    {
        // Re-check state
        if (hasUserWindowId()) {
            onWinIdChanged();
        } else {
            onActiveWindowChanged();
        }

        m_delayedMenuWindowId = -1;
    }

}
