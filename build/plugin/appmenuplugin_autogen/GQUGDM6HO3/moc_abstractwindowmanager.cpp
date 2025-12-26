/****************************************************************************
** Meta object code from reading C++ file 'abstractwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugin/wm/abstractwindowmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractwindowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN2WM21AbstractWindowManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto WM::AbstractWindowManager::qt_create_metaobjectdata<qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WM::AbstractWindowManager",
        "applicationMenuChanged",
        "",
        "serviceName",
        "menuObjectPath",
        "modelNeedsUpdate",
        "dataChanged",
        "menuAvailableChanged",
        "filterByActiveChanged",
        "filterChildrenChanged",
        "visibleChanged",
        "screenGeometryChanged",
        "winIdChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'applicationMenuChanged'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'modelNeedsUpdate'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuAvailableChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterByActiveChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterChildrenChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'winIdChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractWindowManager, qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WM::AbstractWindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>.metaTypes,
    nullptr
} };

void WM::AbstractWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractWindowManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applicationMenuChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->modelNeedsUpdate(); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->menuAvailableChanged(); break;
        case 4: _t->filterByActiveChanged(); break;
        case 5: _t->filterChildrenChanged(); break;
        case 6: _t->visibleChanged(); break;
        case 7: _t->screenGeometryChanged(); break;
        case 8: _t->winIdChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)(const QString & , const QString & )>(_a, &AbstractWindowManager::applicationMenuChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::modelNeedsUpdate, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::dataChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::menuAvailableChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::filterByActiveChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::filterChildrenChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::visibleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::screenGeometryChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractWindowManager::*)()>(_a, &AbstractWindowManager::winIdChanged, 8))
            return;
    }
}

const QMetaObject *WM::AbstractWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WM::AbstractWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM21AbstractWindowManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WM::AbstractWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WM::AbstractWindowManager::applicationMenuChanged(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void WM::AbstractWindowManager::modelNeedsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WM::AbstractWindowManager::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WM::AbstractWindowManager::menuAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WM::AbstractWindowManager::filterByActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WM::AbstractWindowManager::filterChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WM::AbstractWindowManager::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WM::AbstractWindowManager::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WM::AbstractWindowManager::winIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
