/****************************************************************************
** Meta object code from reading C++ file 'appmenumodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugin/appmenumodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenumodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12AppMenuModelE_t {};
} // unnamed namespace

template <> constexpr inline auto AppMenuModel::qt_create_metaobjectdata<qt_meta_tag_ZN12AppMenuModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AppMenuModel",
        "requestActivateIndex",
        "",
        "index",
        "menuAvailableChanged",
        "modelNeedsUpdate",
        "filterByActiveChanged",
        "filterChildrenChanged",
        "visibleChanged",
        "screenGeometryChanged",
        "winIdChanged",
        "updateApplicationMenu",
        "serviceName",
        "menuObjectPath",
        "update",
        "menuAvailable",
        "visible",
        "filterByActive",
        "filterChildren",
        "screenGeometry",
        "winId",
        "QVariant"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestActivateIndex'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'menuAvailableChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modelNeedsUpdate'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterByActiveChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterChildrenChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'winIdChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateApplicationMenu'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'menuAvailable'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'filterByActive'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'filterChildren'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'screenGeometry'
        QtMocHelpers::PropertyData<QRect>(19, QMetaType::QRect, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'winId'
        QtMocHelpers::PropertyData<QVariant>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AppMenuModel, qt_meta_tag_ZN12AppMenuModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AppMenuModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AppMenuModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AppMenuModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12AppMenuModelE_t>.metaTypes,
    nullptr
} };

void AppMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppMenuModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestActivateIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->menuAvailableChanged(); break;
        case 2: _t->modelNeedsUpdate(); break;
        case 3: _t->filterByActiveChanged(); break;
        case 4: _t->filterChildrenChanged(); break;
        case 5: _t->visibleChanged(); break;
        case 6: _t->screenGeometryChanged(); break;
        case 7: _t->winIdChanged(); break;
        case 8: _t->updateApplicationMenu((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->update(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)(int )>(_a, &AppMenuModel::requestActivateIndex, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::menuAvailableChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::modelNeedsUpdate, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::filterByActiveChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::filterChildrenChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::visibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::screenGeometryChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuModel::*)()>(_a, &AppMenuModel::winIdChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->menuAvailable(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->visible(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->filterByActive(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->filterChildren(); break;
        case 4: *reinterpret_cast<QRect*>(_v) = _t->screenGeometry(); break;
        case 5: *reinterpret_cast<QVariant*>(_v) = _t->winId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMenuAvailable(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setFilterByActive(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setFilterChildren(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setScreenGeometry(*reinterpret_cast<QRect*>(_v)); break;
        case 5: _t->setWinId(*reinterpret_cast<QVariant*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *AppMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AppMenuModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int AppMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AppMenuModel::requestActivateIndex(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void AppMenuModel::menuAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppMenuModel::modelNeedsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppMenuModel::filterByActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AppMenuModel::filterChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AppMenuModel::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AppMenuModel::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AppMenuModel::winIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
