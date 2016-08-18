/****************************************************************************
** Meta object code from reading C++ file 'limitreagentoperate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../template_first/limitreagentoperate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'limitreagentoperate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_limitReagentOperate_t {
    QByteArrayData data[6];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_limitReagentOperate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_limitReagentOperate_t qt_meta_stringdata_limitReagentOperate = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 34),
QT_MOC_LITERAL(2, 55, 0),
QT_MOC_LITERAL(3, 56, 48),
QT_MOC_LITERAL(4, 105, 45),
QT_MOC_LITERAL(5, 151, 43)
    },
    "limitReagentOperate\0"
    "close_limitReagent_To_limitReagent\0\0"
    "on_pushButton_cancelOperate_limitReagent_clicked\0"
    "on_pushButton_cancelrole_limitReagent_clicked\0"
    "on_pushButton_sureRole_limitReagent_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_limitReagentOperate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void limitReagentOperate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        limitReagentOperate *_t = static_cast<limitReagentOperate *>(_o);
        switch (_id) {
        case 0: _t->close_limitReagent_To_limitReagent(); break;
        case 1: _t->on_pushButton_cancelOperate_limitReagent_clicked(); break;
        case 2: _t->on_pushButton_cancelrole_limitReagent_clicked(); break;
        case 3: _t->on_pushButton_sureRole_limitReagent_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (limitReagentOperate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&limitReagentOperate::close_limitReagent_To_limitReagent)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject limitReagentOperate::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_limitReagentOperate.data,
      qt_meta_data_limitReagentOperate,  qt_static_metacall, 0, 0}
};


const QMetaObject *limitReagentOperate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *limitReagentOperate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_limitReagentOperate.stringdata))
        return static_cast<void*>(const_cast< limitReagentOperate*>(this));
    return QWidget::qt_metacast(_clname);
}

int limitReagentOperate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void limitReagentOperate::close_limitReagent_To_limitReagent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
