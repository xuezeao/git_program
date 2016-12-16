/****************************************************************************
** Meta object code from reading C++ file 'execut_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/execut_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'execut_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Execut_window_t {
    QByteArrayData data[10];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Execut_window_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Execut_window_t qt_meta_stringdata_Execut_window = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 20),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 21),
QT_MOC_LITERAL(4, 58, 19),
QT_MOC_LITERAL(5, 78, 12),
QT_MOC_LITERAL(6, 91, 12),
QT_MOC_LITERAL(7, 104, 6),
QT_MOC_LITERAL(8, 111, 21),
QT_MOC_LITERAL(9, 133, 21)
    },
    "Execut_window\0upSheet_From_Execute\0\0"
    "on_pBt_cancal_clicked\0on_pBt_next_clicked\0"
    "NetworkError\0updateReturn\0status\0"
    "on_pBt_ignore_clicked\0on_pushButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Execut_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    1,   53,    2, 0x08,
       8,    0,   56,    2, 0x08,
       9,    0,   57,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Execut_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Execut_window *_t = static_cast<Execut_window *>(_o);
        switch (_id) {
        case 0: _t->upSheet_From_Execute(); break;
        case 1: _t->on_pBt_cancal_clicked(); break;
        case 2: _t->on_pBt_next_clicked(); break;
        case 3: _t->NetworkError(); break;
        case 4: _t->updateReturn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pBt_ignore_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Execut_window::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Execut_window::upSheet_From_Execute)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Execut_window::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Execut_window.data,
      qt_meta_data_Execut_window,  qt_static_metacall, 0, 0}
};


const QMetaObject *Execut_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Execut_window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Execut_window.stringdata))
        return static_cast<void*>(const_cast< Execut_window*>(this));
    return QDialog::qt_metacast(_clname);
}

int Execut_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Execut_window::upSheet_From_Execute()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
