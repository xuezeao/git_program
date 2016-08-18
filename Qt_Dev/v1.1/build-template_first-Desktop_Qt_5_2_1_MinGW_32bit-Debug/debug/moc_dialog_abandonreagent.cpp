/****************************************************************************
** Meta object code from reading C++ file 'dialog_abandonreagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../template_first/dialog_abandonreagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_abandonreagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dialog_abandonReagent_t {
    QByteArrayData data[5];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dialog_abandonReagent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dialog_abandonReagent_t qt_meta_stringdata_dialog_abandonReagent = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 31),
QT_MOC_LITERAL(2, 54, 0),
QT_MOC_LITERAL(3, 55, 45),
QT_MOC_LITERAL(4, 101, 46)
    },
    "dialog_abandonReagent\0"
    "close_dialog_abandonReagentPage\0\0"
    "on_pushButton_cancelOK_abandonReagent_clicked\0"
    "on_pushButton_operateOK_abandonReagent_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dialog_abandonReagent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dialog_abandonReagent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dialog_abandonReagent *_t = static_cast<dialog_abandonReagent *>(_o);
        switch (_id) {
        case 0: _t->close_dialog_abandonReagentPage(); break;
        case 1: _t->on_pushButton_cancelOK_abandonReagent_clicked(); break;
        case 2: _t->on_pushButton_operateOK_abandonReagent_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (dialog_abandonReagent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dialog_abandonReagent::close_dialog_abandonReagentPage)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dialog_abandonReagent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dialog_abandonReagent.data,
      qt_meta_data_dialog_abandonReagent,  qt_static_metacall, 0, 0}
};


const QMetaObject *dialog_abandonReagent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dialog_abandonReagent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dialog_abandonReagent.stringdata))
        return static_cast<void*>(const_cast< dialog_abandonReagent*>(this));
    return QWidget::qt_metacast(_clname);
}

int dialog_abandonReagent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dialog_abandonReagent::close_dialog_abandonReagentPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
