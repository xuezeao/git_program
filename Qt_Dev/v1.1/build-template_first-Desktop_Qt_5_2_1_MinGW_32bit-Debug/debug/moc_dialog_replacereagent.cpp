/****************************************************************************
** Meta object code from reading C++ file 'dialog_replacereagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../template_first/dialog_replacereagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_replacereagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_replaceReagent_t {
    QByteArrayData data[4];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Dialog_replaceReagent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Dialog_replaceReagent_t qt_meta_stringdata_Dialog_replaceReagent = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 44),
QT_MOC_LITERAL(2, 67, 0),
QT_MOC_LITERAL(3, 68, 55)
    },
    "Dialog_replaceReagent\0"
    "close_dialog_replaceReagen_To_replaceReagent\0"
    "\0on_pushButton_backPreviousOption_replaceReagent_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_replaceReagent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Dialog_replaceReagent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_replaceReagent *_t = static_cast<Dialog_replaceReagent *>(_o);
        switch (_id) {
        case 0: _t->close_dialog_replaceReagen_To_replaceReagent(); break;
        case 1: _t->on_pushButton_backPreviousOption_replaceReagent_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dialog_replaceReagent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog_replaceReagent::close_dialog_replaceReagen_To_replaceReagent)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Dialog_replaceReagent::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_replaceReagent.data,
      qt_meta_data_Dialog_replaceReagent,  qt_static_metacall, 0, 0}
};


const QMetaObject *Dialog_replaceReagent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_replaceReagent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_replaceReagent.stringdata))
        return static_cast<void*>(const_cast< Dialog_replaceReagent*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_replaceReagent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Dialog_replaceReagent::close_dialog_replaceReagen_To_replaceReagent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
