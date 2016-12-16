/****************************************************************************
** Meta object code from reading C++ file 'http_gandp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/http_gandp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http_gandp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_http_GAndP_t {
    QByteArrayData data[20];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_http_GAndP_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_http_GAndP_t qt_meta_stringdata_http_GAndP = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 19),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 8),
QT_MOC_LITERAL(4, 41, 10),
QT_MOC_LITERAL(5, 52, 10),
QT_MOC_LITERAL(6, 63, 20),
QT_MOC_LITERAL(7, 84, 6),
QT_MOC_LITERAL(8, 91, 19),
QT_MOC_LITERAL(9, 111, 12),
QT_MOC_LITERAL(10, 124, 9),
QT_MOC_LITERAL(11, 134, 21),
QT_MOC_LITERAL(12, 156, 9),
QT_MOC_LITERAL(13, 166, 24),
QT_MOC_LITERAL(14, 191, 17),
QT_MOC_LITERAL(15, 209, 6),
QT_MOC_LITERAL(16, 216, 8),
QT_MOC_LITERAL(17, 225, 8),
QT_MOC_LITERAL(18, 234, 14),
QT_MOC_LITERAL(19, 249, 5)
    },
    "http_GAndP\0sendInfo_To_Operate\0\0"
    "drawerNo\0positionNo\0positionId\0"
    "sendError_To_Operate\0status\0"
    "sendError_To_Execut\0error_status\0"
    "errorInfo\0sendInfo_To_sheetPage\0"
    "sendFalse\0sendInfo_To_return_PutIn\0"
    "sendInfo_To_Enter\0userId\0userRole\0"
    "finished\0QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_http_GAndP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06,
       6,    1,   61,    2, 0x06,
       8,    2,   64,    2, 0x06,
      11,    1,   69,    2, 0x06,
      12,    0,   72,    2, 0x06,
      13,    1,   73,    2, 0x06,
      14,    3,   76,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      17,    1,   83,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,   15,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void http_GAndP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        http_GAndP *_t = static_cast<http_GAndP *>(_o);
        switch (_id) {
        case 0: _t->sendInfo_To_Operate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sendError_To_Operate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendError_To_Execut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sendInfo_To_sheetPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendFalse(); break;
        case 5: _t->sendInfo_To_return_PutIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sendInfo_To_Enter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (http_GAndP::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendInfo_To_Operate)) {
                *result = 0;
            }
        }
        {
            typedef void (http_GAndP::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendError_To_Operate)) {
                *result = 1;
            }
        }
        {
            typedef void (http_GAndP::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendError_To_Execut)) {
                *result = 2;
            }
        }
        {
            typedef void (http_GAndP::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendInfo_To_sheetPage)) {
                *result = 3;
            }
        }
        {
            typedef void (http_GAndP::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendFalse)) {
                *result = 4;
            }
        }
        {
            typedef void (http_GAndP::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendInfo_To_return_PutIn)) {
                *result = 5;
            }
        }
        {
            typedef void (http_GAndP::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&http_GAndP::sendInfo_To_Enter)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject http_GAndP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_http_GAndP.data,
      qt_meta_data_http_GAndP,  qt_static_metacall, 0, 0}
};


const QMetaObject *http_GAndP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *http_GAndP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_http_GAndP.stringdata))
        return static_cast<void*>(const_cast< http_GAndP*>(this));
    return QObject::qt_metacast(_clname);
}

int http_GAndP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void http_GAndP::sendInfo_To_Operate(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void http_GAndP::sendError_To_Operate(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void http_GAndP::sendError_To_Execut(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void http_GAndP::sendInfo_To_sheetPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void http_GAndP::sendFalse()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void http_GAndP::sendInfo_To_return_PutIn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void http_GAndP::sendInfo_To_Enter(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
