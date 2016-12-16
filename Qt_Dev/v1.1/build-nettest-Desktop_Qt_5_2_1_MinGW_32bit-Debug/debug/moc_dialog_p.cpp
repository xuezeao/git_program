/****************************************************************************
** Meta object code from reading C++ file 'dialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../nettest/dialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dialog_P_t {
    QByteArrayData data[5];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dialog_P_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dialog_P_t qt_meta_stringdata_dialog_P = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 40),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 36),
QT_MOC_LITERAL(4, 88, 32)
    },
    "dialog_P\0on_pushButton_backPreviousOption_clicked\0"
    "\0on_pushButton_jumpThisOption_clicked\0"
    "on_pushButton_placedNext_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dialog_P[] = {

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
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dialog_P::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dialog_P *_t = static_cast<dialog_P *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_backPreviousOption_clicked(); break;
        case 1: _t->on_pushButton_jumpThisOption_clicked(); break;
        case 2: _t->on_pushButton_placedNext_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dialog_P::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dialog_P.data,
      qt_meta_data_dialog_P,  qt_static_metacall, 0, 0}
};


const QMetaObject *dialog_P::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dialog_P::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dialog_P.stringdata))
        return static_cast<void*>(const_cast< dialog_P*>(this));
    return QDialog::qt_metacast(_clname);
}

int dialog_P::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
