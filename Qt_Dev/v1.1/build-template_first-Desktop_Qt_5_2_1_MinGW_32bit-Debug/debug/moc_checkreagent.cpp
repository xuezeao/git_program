/****************************************************************************
** Meta object code from reading C++ file 'checkreagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../template_first/checkreagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkreagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CheckReagent_t {
    QByteArrayData data[6];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CheckReagent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CheckReagent_t qt_meta_stringdata_CheckReagent = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 28),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 35),
QT_MOC_LITERAL(4, 79, 50),
QT_MOC_LITERAL(5, 130, 44)
    },
    "CheckReagent\0close_checkReagent_To_MainUI\0"
    "\0close_dialog_checkReagent_Come_here\0"
    "on_pushButton_cancelOperate_replaceReagent_clicked\0"
    "on_pushButton__sureOK_replaceReagent_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckReagent[] = {

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
       3,    0,   35,    2, 0x0a,
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

void CheckReagent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckReagent *_t = static_cast<CheckReagent *>(_o);
        switch (_id) {
        case 0: _t->close_checkReagent_To_MainUI(); break;
        case 1: _t->close_dialog_checkReagent_Come_here(); break;
        case 2: _t->on_pushButton_cancelOperate_replaceReagent_clicked(); break;
        case 3: _t->on_pushButton__sureOK_replaceReagent_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CheckReagent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckReagent::close_checkReagent_To_MainUI)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CheckReagent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CheckReagent.data,
      qt_meta_data_CheckReagent,  qt_static_metacall, 0, 0}
};


const QMetaObject *CheckReagent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckReagent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckReagent.stringdata))
        return static_cast<void*>(const_cast< CheckReagent*>(this));
    return QWidget::qt_metacast(_clname);
}

int CheckReagent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CheckReagent::close_checkReagent_To_MainUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
