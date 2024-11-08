/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../frmmain.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSfrmMainENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSfrmMainENDCLASS = QtMocHelpers::stringData(
    "frmMain",
    "on_btnSelect_clicked",
    "",
    "on_btnSend_clicked",
    "on_cboxServer_currentIndexChanged",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfrmMainENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[8];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[34];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfrmMainENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfrmMainENDCLASS_t qt_meta_stringdata_CLASSfrmMainENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "frmMain"
        QT_MOC_LITERAL(8, 20),  // "on_btnSelect_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 18),  // "on_btnSend_clicked"
        QT_MOC_LITERAL(49, 33),  // "on_cboxServer_currentIndexCha..."
        QT_MOC_LITERAL(83, 5)   // "index"
    },
    "frmMain",
    "on_btnSelect_clicked",
    "",
    "on_btnSend_clicked",
    "on_cboxServer_currentIndexChanged",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSfrmMainENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject frmMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSfrmMainENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSfrmMainENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSfrmMainENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<frmMain, std::true_type>,
        // method 'on_btnSelect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cboxServer_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnSelect_clicked(); break;
        case 1: _t->on_btnSend_clicked(); break;
        case 2: _t->on_cboxServer_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSfrmMainENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
