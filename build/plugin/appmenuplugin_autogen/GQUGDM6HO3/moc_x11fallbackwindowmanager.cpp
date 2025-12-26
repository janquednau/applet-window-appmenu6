/****************************************************************************
** Meta object code from reading C++ file 'x11fallbackwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugin/wm/x11fallbackwindowmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'x11fallbackwindowmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto WM::X11FallbackWindowManager::qt_create_metaobjectdata<qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WM::X11FallbackWindowManager",
        "onActiveWindowChanged",
        "",
        "WId",
        "id",
        "onWindowChanged",
        "NET::Properties",
        "properties",
        "NET::Properties2",
        "properties2",
        "onWindowRemoved",
        "filterWindow",
        "KWindowInfo&",
        "info"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onActiveWindowChanged'
        QtMocHelpers::SlotData<void(WId)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onWindowChanged'
        QtMocHelpers::SlotData<void(WId, NET::Properties, NET::Properties2)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onWindowChanged'
        QtMocHelpers::SlotData<void(WId, NET::Properties)>(5, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onWindowRemoved'
        QtMocHelpers::SlotData<void(WId)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'filterWindow'
        QtMocHelpers::SlotData<void(KWindowInfo &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11FallbackWindowManager, qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WM::X11FallbackWindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractWindowManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>.metaTypes,
    nullptr
} };

void WM::X11FallbackWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11FallbackWindowManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onActiveWindowChanged((*reinterpret_cast< std::add_pointer_t<WId>>(_a[1]))); break;
        case 1: _t->onWindowChanged((*reinterpret_cast< std::add_pointer_t<WId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NET::Properties>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<NET::Properties2>>(_a[3]))); break;
        case 2: _t->onWindowChanged((*reinterpret_cast< std::add_pointer_t<WId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NET::Properties>>(_a[2]))); break;
        case 3: _t->onWindowRemoved((*reinterpret_cast< std::add_pointer_t<WId>>(_a[1]))); break;
        case 4: _t->filterWindow((*reinterpret_cast< std::add_pointer_t<KWindowInfo&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WM::X11FallbackWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WM::X11FallbackWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2WM24X11FallbackWindowManagerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    return AbstractWindowManager::qt_metacast(_clname);
}

int WM::X11FallbackWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractWindowManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
