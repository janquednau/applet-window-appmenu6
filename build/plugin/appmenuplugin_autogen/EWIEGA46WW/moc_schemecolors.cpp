/****************************************************************************
** Meta object code from reading C++ file 'schemecolors.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugin/schemecolors.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schemecolors.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12SchemeColorsE_t {};
} // unnamed namespace

template <> constexpr inline auto SchemeColors::qt_create_metaobjectdata<qt_meta_tag_ZN12SchemeColorsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SchemeColors",
        "colorsChanged",
        "",
        "schemeFileChanged",
        "updateScheme",
        "schemeFile",
        "backgroundColor",
        "textColor",
        "inactiveBackgroundColor",
        "inactiveTextColor",
        "highlightColor",
        "highlightedTextColor",
        "positiveText",
        "neutralText",
        "negativeText",
        "buttonTextColor",
        "buttonBackgroundColor",
        "buttonHoverColor",
        "buttonFocusColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'colorsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'schemeFileChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateScheme'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'schemeFile'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(6, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'textColor'
        QtMocHelpers::PropertyData<QColor>(7, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'inactiveBackgroundColor'
        QtMocHelpers::PropertyData<QColor>(8, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'inactiveTextColor'
        QtMocHelpers::PropertyData<QColor>(9, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'highlightColor'
        QtMocHelpers::PropertyData<QColor>(10, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'highlightedTextColor'
        QtMocHelpers::PropertyData<QColor>(11, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'positiveText'
        QtMocHelpers::PropertyData<QColor>(12, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'neutralText'
        QtMocHelpers::PropertyData<QColor>(13, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'negativeText'
        QtMocHelpers::PropertyData<QColor>(14, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'buttonTextColor'
        QtMocHelpers::PropertyData<QColor>(15, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'buttonBackgroundColor'
        QtMocHelpers::PropertyData<QColor>(16, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'buttonHoverColor'
        QtMocHelpers::PropertyData<QColor>(17, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
        // property 'buttonFocusColor'
        QtMocHelpers::PropertyData<QColor>(18, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SchemeColors, qt_meta_tag_ZN12SchemeColorsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SchemeColors::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SchemeColorsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SchemeColorsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SchemeColorsE_t>.metaTypes,
    nullptr
} };

void SchemeColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SchemeColors *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->colorsChanged(); break;
        case 1: _t->schemeFileChanged(); break;
        case 2: _t->updateScheme(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SchemeColors::*)()>(_a, &SchemeColors::colorsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SchemeColors::*)()>(_a, &SchemeColors::schemeFileChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->schemeFile(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->backgroundColor(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->inactiveBackgroundColor(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->inactiveTextColor(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->highlightColor(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->highlightedTextColor(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->positiveText(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->neutralText(); break;
        case 9: *reinterpret_cast<QColor*>(_v) = _t->negativeText(); break;
        case 10: *reinterpret_cast<QColor*>(_v) = _t->buttonTextColor(); break;
        case 11: *reinterpret_cast<QColor*>(_v) = _t->buttonBackgroundColor(); break;
        case 12: *reinterpret_cast<QColor*>(_v) = _t->buttonHoverColor(); break;
        case 13: *reinterpret_cast<QColor*>(_v) = _t->buttonFocusColor(); break;
        default: break;
        }
    }
}

const QMetaObject *SchemeColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchemeColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SchemeColorsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SchemeColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SchemeColors::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SchemeColors::schemeFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
