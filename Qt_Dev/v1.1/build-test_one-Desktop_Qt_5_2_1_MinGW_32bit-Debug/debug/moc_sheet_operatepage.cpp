/****************************************************************************
** Meta object code from reading C++ file 'sheet_operatepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/sheet_operatepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sheet_operatepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sheet_OperatePage_t {
    QByteArrayData data[8];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Sheet_OperatePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Sheet_OperatePage_t qt_meta_stringdata_Sheet_OperatePage = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 21),
QT_MOC_LITERAL(4, 55, 17),
QT_MOC_LITERAL(5, 73, 19),
QT_MOC_LITERAL(6, 93, 6),
QT_MOC_LITERAL(7, 100, 21)
    },
    "Sheet_OperatePage\0closePrevious\0\0"
    "on_pBt_return_clicked\0on_pBt_OK_clicked\0"
    "receivers_From_http\0status\0"
    "on_pBt_ignore_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sheet_OperatePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    1,   42,    2, 0x08,
       7,    0,   45,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Sheet_OperatePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sheet_OperatePage *_t = static_cast<Sheet_OperatePage *>(_o);
        switch (_id) {
        case 0: _t->closePrevious(); break;
        case 1: _t->on_pBt_return_clicked(); break;
        case 2: _t->on_pBt_OK_clicked(); break;
        case 3: _t->receivers_From_http((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pBt_ignore_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Sheet_OperatePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sheet_OperatePage::closePrevious)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Sheet_OperatePage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Sheet_OperatePage.data,
      qt_meta_data_Sheet_OperatePage,  qt_static_metacall, 0, 0}
};


const QMetaObject *Sheet_OperatePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sheet_OperatePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Sheet_OperatePage.stringdata))
        return static_cast<void*>(const_cast< Sheet_OperatePage*>(this));
    return QDialog::qt_metacast(_clname);
}

int Sheet_OperatePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Sheet_OperatePage::closePrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
