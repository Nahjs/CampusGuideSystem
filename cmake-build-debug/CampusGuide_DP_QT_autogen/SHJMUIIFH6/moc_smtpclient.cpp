/****************************************************************************
** Meta object code from reading C++ file 'smtpclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sendemailapi/smtpclient.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtpclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSmtpClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSmtpClientENDCLASS = QtMocHelpers::stringData(
    "SmtpClient",
    "smtpError",
    "",
    "SmtpError",
    "e",
    "socketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "socketError",
    "QAbstractSocket::SocketError",
    "error",
    "socketReadyRead"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSmtpClientENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[2];
    char stringdata5[19];
    char stringdata6[29];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[29];
    char stringdata10[6];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSmtpClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSmtpClientENDCLASS_t qt_meta_stringdata_CLASSSmtpClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "SmtpClient"
        QT_MOC_LITERAL(11, 9),  // "smtpError"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "SmtpError"
        QT_MOC_LITERAL(32, 1),  // "e"
        QT_MOC_LITERAL(34, 18),  // "socketStateChanged"
        QT_MOC_LITERAL(53, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(82, 5),  // "state"
        QT_MOC_LITERAL(88, 11),  // "socketError"
        QT_MOC_LITERAL(100, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(129, 5),  // "error"
        QT_MOC_LITERAL(135, 15)   // "socketReadyRead"
    },
    "SmtpClient",
    "smtpError",
    "",
    "SmtpError",
    "e",
    "socketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "socketError",
    "QAbstractSocket::SocketError",
    "error",
    "socketReadyRead"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSmtpClientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x09,    3 /* Protected */,
       8,    1,   44,    2, 0x09,    5 /* Protected */,
      11,    0,   47,    2, 0x09,    7 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SmtpClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSmtpClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSmtpClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSmtpClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SmtpClient, std::true_type>,
        // method 'smtpError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SmtpError, std::false_type>,
        // method 'socketStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'socketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'socketReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SmtpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmtpClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->smtpError((*reinterpret_cast< std::add_pointer_t<SmtpError>>(_a[1]))); break;
        case 1: _t->socketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 2: _t->socketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 3: _t->socketReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SmtpClient::*)(SmtpError );
            if (_t _q_method = &SmtpClient::smtpError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SmtpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmtpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSmtpClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SmtpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SmtpClient::smtpError(SmtpError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
