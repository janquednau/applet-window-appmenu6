/****************************************************************************
** Meta object code from reading C++ file 'waylandwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugin/wm/waylandwindowmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waylandwindowmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN2WM20WaylandWindowManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto WM::WaylandWindowManager::qt_create_metaobjectdata<qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WM::WaylandWindowManager",
        "onActiveWindowChanged",
        "",
        "onDelayedTimerTriggered",
        "onWinIdChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onActiveWindowChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelayedTimerTriggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onWinIdChanged'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandWindowManager, qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WM::WaylandWindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractWindowManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>.metaTypes,
    nullptr
} };

void WM::WaylandWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandWindowManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onActiveWindowChanged(); break;
        case 1: _t->onDelayedTimerTriggered(); break;
        case 2: _t->onWinIdChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *WM::WaylandWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WM::WaylandWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM20WaylandWindowManagerE_t>.strings))
        return static_cast<void*>(this);
    return AbstractWindowManager::qt_metacast(_clname);
}

int WM::WaylandWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractWindowManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
