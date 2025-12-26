/****************************************************************************
** Meta object code from reading C++ file 'appmenuapplet.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lib/appmenuapplet.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenuapplet.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13AppMenuAppletE_t {};
} // unnamed namespace

template <> constexpr inline auto AppMenuApplet::qt_create_metaobjectdata<qt_meta_tag_ZN13AppMenuAppletE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AppMenuApplet",
        "menuIsShownChanged",
        "",
        "modelChanged",
        "viewChanged",
        "currentIndexChanged",
        "buttonGridChanged",
        "menuColorSchemeChanged",
        "requestActivateIndex",
        "index",
        "trigger",
        "QQuickItem*",
        "ctx",
        "idx",
        "menuIsShown",
        "view",
        "currentIndex",
        "menuColorScheme",
        "buttonGrid",
        "model"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'menuIsShownChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buttonGridChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuColorSchemeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestActivateIndex'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'trigger'
        QtMocHelpers::SlotData<void(QQuickItem *, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'menuIsShown'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'view'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'menuColorScheme'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'buttonGrid'
        QtMocHelpers::PropertyData<QQuickItem*>(18, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'model'
        QtMocHelpers::PropertyData<QObject*>(19, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AppMenuApplet, qt_meta_tag_ZN13AppMenuAppletE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AppMenuApplet::staticMetaObject = { {
    QMetaObject::SuperData::link<Plasma::Applet::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AppMenuAppletE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AppMenuAppletE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13AppMenuAppletE_t>.metaTypes,
    nullptr
} };

void AppMenuApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppMenuApplet *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->menuIsShownChanged(); break;
        case 1: _t->modelChanged(); break;
        case 2: _t->viewChanged(); break;
        case 3: _t->currentIndexChanged(); break;
        case 4: _t->buttonGridChanged(); break;
        case 5: _t->menuColorSchemeChanged(); break;
        case 6: _t->requestActivateIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->trigger((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::menuIsShownChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::modelChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::viewChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::currentIndexChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::buttonGridChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)()>(_a, &AppMenuApplet::menuColorSchemeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppMenuApplet::*)(int )>(_a, &AppMenuApplet::requestActivateIndex, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->menuIsShown(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->view(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->menuColorScheme(); break;
        case 4: *reinterpret_cast<QQuickItem**>(_v) = _t->buttonGrid(); break;
        case 5: *reinterpret_cast<QObject**>(_v) = _t->model(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setView(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setMenuColorScheme(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setButtonGrid(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 5: _t->setModel(*reinterpret_cast<QObject**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *AppMenuApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMenuApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AppMenuAppletE_t>.strings))
        return static_cast<void*>(this);
    return Plasma::Applet::qt_metacast(_clname);
}

int AppMenuApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Plasma::Applet::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void AppMenuApplet::menuIsShownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AppMenuApplet::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppMenuApplet::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppMenuApplet::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AppMenuApplet::buttonGridChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AppMenuApplet::menuColorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AppMenuApplet::requestActivateIndex(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
