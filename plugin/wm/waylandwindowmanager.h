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

#ifndef WAYLANDWINDOWMANAGER_H
#define WAYLANDWINDOWMANAGER_H

//local
#include "abstractwindowmanager.h"

//Qt
#include <QObject>
#include <QPointer>
#include <QTimer>

// Plasma TaskManager
#include <taskmanager/tasksmodel.h>

namespace WM {

    class WaylandWindowManager : public AbstractWindowManager
    {
        Q_OBJECT

    public:
        explicit WaylandWindowManager(QObject *parent = nullptr);
        ~WaylandWindowManager() override;

    private Q_SLOTS:
        void onActiveWindowChanged();
        void onDelayedTimerTriggered();
        void onWinIdChanged();

    private:
        void validateApplicationMenu(const QString &objectPath, const QString &serviceName);
        QModelIndex findTaskForWinId(const QVariant &wid) const;

    private:
        //! window that its menu initialization may be delayed
        QVariant m_delayedMenuWindowId{-1};
        QTimer m_delayedApplicationMenuTimer;

        TaskManager::TasksModel* m_tasksModel;
    };

}

#endif
