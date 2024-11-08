/****************************************************************************
** Meta object code from reading C++ file 'inquiry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inquiry.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inquiry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSInquiryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInquiryENDCLASS = QtMocHelpers::stringData(
    "Inquiry",
    "doProcessAddPlace",
    "",
    "doProcessOpenHotelWeb",
    "doProcessOpenBadmintonWeb",
    "doProcessOpenSwimWeb",
    "doProcessOpenSchoolWeb"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInquiryENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[26];
    char stringdata5[21];
    char stringdata6[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInquiryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInquiryENDCLASS_t qt_meta_stringdata_CLASSInquiryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Inquiry"
        QT_MOC_LITERAL(8, 17),  // "doProcessAddPlace"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 21),  // "doProcessOpenHotelWeb"
        QT_MOC_LITERAL(49, 25),  // "doProcessOpenBadmintonWeb"
        QT_MOC_LITERAL(75, 20),  // "doProcessOpenSwimWeb"
        QT_MOC_LITERAL(96, 22)   // "doProcessOpenSchoolWeb"
    },
    "Inquiry",
    "doProcessAddPlace",
    "",
    "doProcessOpenHotelWeb",
    "doProcessOpenBadmintonWeb",
    "doProcessOpenSwimWeb",
    "doProcessOpenSchoolWeb"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInquiryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       3,    1,   47,    2, 0x08,    3 /* Private */,
       4,    1,   50,    2, 0x08,    5 /* Private */,
       5,    1,   53,    2, 0x08,    7 /* Private */,
       6,    1,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Inquiry::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSInquiryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInquiryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInquiryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Inquiry, std::true_type>,
        // method 'doProcessAddPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessOpenHotelWeb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessOpenBadmintonWeb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessOpenSwimWeb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessOpenSchoolWeb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Inquiry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Inquiry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doProcessAddPlace((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->doProcessOpenHotelWeb((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->doProcessOpenBadmintonWeb((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->doProcessOpenSwimWeb((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->doProcessOpenSchoolWeb((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Inquiry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inquiry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInquiryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Inquiry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
