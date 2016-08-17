/****************************************************************************
** Meta object code from reading C++ file 'placereagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../program_test/placereagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placereagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_placeReagent_t {
    QByteArrayData data[12];
    char stringdata[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_placeReagent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_placeReagent_t qt_meta_stringdata_placeReagent = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 7),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 29),
QT_MOC_LITERAL(4, 52, 32),
QT_MOC_LITERAL(5, 85, 34),
QT_MOC_LITERAL(6, 120, 34),
QT_MOC_LITERAL(7, 155, 29),
QT_MOC_LITERAL(8, 185, 31),
QT_MOC_LITERAL(9, 217, 35),
QT_MOC_LITERAL(10, 253, 31),
QT_MOC_LITERAL(11, 285, 11)
    },
    "placeReagent\0timeout\0\0"
    "on_pushButton_inquire_clicked\0"
    "on_pushButton_pushChange_clicked\0"
    "on_pushButton_returnOption_clicked\0"
    "on_pushButton_showAllSheet_clicked\0"
    "on_pushButton_upOrder_clicked\0"
    "on_pushButton_downOrder_clicked\0"
    "on_pushButton_delCheckedRow_clicked\0"
    "on_pushButton_addOption_clicked\0"
    "auto_AddRow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_placeReagent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    0,   73,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void placeReagent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        placeReagent *_t = static_cast<placeReagent *>(_o);
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->on_pushButton_inquire_clicked(); break;
        case 2: _t->on_pushButton_pushChange_clicked(); break;
        case 3: _t->on_pushButton_returnOption_clicked(); break;
        case 4: _t->on_pushButton_showAllSheet_clicked(); break;
        case 5: _t->on_pushButton_upOrder_clicked(); break;
        case 6: _t->on_pushButton_downOrder_clicked(); break;
        case 7: _t->on_pushButton_delCheckedRow_clicked(); break;
        case 8: _t->on_pushButton_addOption_clicked(); break;
        case 9: _t->auto_AddRow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (placeReagent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&placeReagent::timeout)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject placeReagent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_placeReagent.data,
      qt_meta_data_placeReagent,  qt_static_metacall, 0, 0}
};


const QMetaObject *placeReagent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *placeReagent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_placeReagent.stringdata))
        return static_cast<void*>(const_cast< placeReagent*>(this));
    return QWidget::qt_metacast(_clname);
}

int placeReagent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void placeReagent::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
