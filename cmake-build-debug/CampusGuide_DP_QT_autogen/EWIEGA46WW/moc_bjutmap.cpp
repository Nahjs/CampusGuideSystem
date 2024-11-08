/****************************************************************************
** Meta object code from reading C++ file 'bjutmap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bjutmap.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bjutmap.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbjutmapENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbjutmapENDCLASS = QtMocHelpers::stringData(
    "bjutmap",
    "callSendEmail",
    "",
    "ReturnToInquiry",
    "doProcessDataToMap",
    "doProcessSaveWalkRouteToMap",
    "doProcessSaveArriveTimeToMap",
    "doProcessSaveStayTimeRouteToMap",
    "doProcessClickedSendEmail",
    "doProcessGrabScreen",
    "doProcessReturnToInquiry"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbjutmapENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[8];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[19];
    char stringdata5[28];
    char stringdata6[29];
    char stringdata7[32];
    char stringdata8[26];
    char stringdata9[20];
    char stringdata10[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbjutmapENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbjutmapENDCLASS_t qt_meta_stringdata_CLASSbjutmapENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "bjutmap"
        QT_MOC_LITERAL(8, 13),  // "callSendEmail"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 15),  // "ReturnToInquiry"
        QT_MOC_LITERAL(39, 18),  // "doProcessDataToMap"
        QT_MOC_LITERAL(58, 27),  // "doProcessSaveWalkRouteToMap"
        QT_MOC_LITERAL(86, 28),  // "doProcessSaveArriveTimeToMap"
        QT_MOC_LITERAL(115, 31),  // "doProcessSaveStayTimeRouteToMap"
        QT_MOC_LITERAL(147, 25),  // "doProcessClickedSendEmail"
        QT_MOC_LITERAL(173, 19),  // "doProcessGrabScreen"
        QT_MOC_LITERAL(193, 24)   // "doProcessReturnToInquiry"
    },
    "bjutmap",
    "callSendEmail",
    "",
    "ReturnToInquiry",
    "doProcessDataToMap",
    "doProcessSaveWalkRouteToMap",
    "doProcessSaveArriveTimeToMap",
    "doProcessSaveStayTimeRouteToMap",
    "doProcessClickedSendEmail",
    "doProcessGrabScreen",
    "doProcessReturnToInquiry"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbjutmapENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   70,    2, 0x08,    3 /* Private */,
       5,   20,   73,    2, 0x08,    5 /* Private */,
       6,   20,  114,    2, 0x08,   26 /* Private */,
       7,   20,  155,    2, 0x08,   47 /* Private */,
       8,    1,  196,    2, 0x08,   68 /* Private */,
       9,    1,  199,    2, 0x08,   70 /* Private */,
      10,    1,  202,    2, 0x08,   72 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject bjutmap::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSbjutmapENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbjutmapENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbjutmapENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<bjutmap, std::true_type>,
        // method 'callSendEmail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReturnToInquiry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doProcessDataToMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'doProcessSaveWalkRouteToMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'doProcessSaveArriveTimeToMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'doProcessSaveStayTimeRouteToMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'doProcessClickedSendEmail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessGrabScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doProcessReturnToInquiry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void bjutmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bjutmap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->callSendEmail(); break;
        case 1: _t->ReturnToInquiry(); break;
        case 2: _t->doProcessDataToMap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->doProcessSaveWalkRouteToMap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[16])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[17])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[18])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[19])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[20]))); break;
        case 4: _t->doProcessSaveArriveTimeToMap((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[16])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[17])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[18])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[19])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[20]))); break;
        case 5: _t->doProcessSaveStayTimeRouteToMap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[16])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[17])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[18])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[19])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[20]))); break;
        case 6: _t->doProcessClickedSendEmail((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->doProcessGrabScreen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->doProcessReturnToInquiry((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (bjutmap::*)();
            if (_t _q_method = &bjutmap::callSendEmail; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (bjutmap::*)();
            if (_t _q_method = &bjutmap::ReturnToInquiry; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *bjutmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bjutmap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbjutmapENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int bjutmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void bjutmap::callSendEmail()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void bjutmap::ReturnToInquiry()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
