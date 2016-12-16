/****************************************************************************
** Meta object code from reading C++ file 'enterpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/enterpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enterpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EnterPage_t {
    QByteArrayData data[8];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EnterPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EnterPage_t qt_meta_stringdata_EnterPage = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 27),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 22),
QT_MOC_LITERAL(4, 62, 6),
QT_MOC_LITERAL(5, 69, 6),
QT_MOC_LITERAL(6, 76, 4),
QT_MOC_LITERAL(7, 81, 9)
    },
    "EnterPage\0on_pushButton_sigin_clicked\0"
    "\0receiverInfo_from_Http\0status\0userId\0"
    "role\0closePage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnterPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    3,   30,    2, 0x08,
       7,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void EnterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EnterPage *_t = static_cast<EnterPage *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_sigin_clicked(); break;
        case 1: _t->receiverInfo_from_Http((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->closePage(); break;
        default: ;
        }
    }
}

const QMetaObject EnterPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EnterPage.data,
      qt_meta_data_EnterPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *EnterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EnterPage.stringdata))
        return static_cast<void*>(const_cast< EnterPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int EnterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
