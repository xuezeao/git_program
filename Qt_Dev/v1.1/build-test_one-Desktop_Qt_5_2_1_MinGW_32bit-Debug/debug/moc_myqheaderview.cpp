/****************************************************************************
** Meta object code from reading C++ file 'myqheaderview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/myqheaderview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myqheaderview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyQHeaderView_t {
    QByteArrayData data[5];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MyQHeaderView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MyQHeaderView_t qt_meta_stringdata_MyQHeaderView = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 7),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 5),
QT_MOC_LITERAL(4, 29, 12)
    },
    "MyQHeaderView\0stateUP\0\0state\0SetHeaderBox\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyQHeaderView[] = {

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
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MyQHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyQHeaderView *_t = static_cast<MyQHeaderView *>(_o);
        switch (_id) {
        case 0: _t->stateUP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetHeaderBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyQHeaderView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyQHeaderView::stateUP)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MyQHeaderView::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_MyQHeaderView.data,
      qt_meta_data_MyQHeaderView,  qt_static_metacall, 0, 0}
};


const QMetaObject *MyQHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyQHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQHeaderView.stringdata))
        return static_cast<void*>(const_cast< MyQHeaderView*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int MyQHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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
void MyQHeaderView::stateUP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ExecuteSheet_t {
    QByteArrayData data[5];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ExecuteSheet_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ExecuteSheet_t qt_meta_stringdata_ExecuteSheet = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 10),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 5),
QT_MOC_LITERAL(4, 31, 12)
    },
    "ExecuteSheet\0stateUP_ES\0\0state\0"
    "SetHeaderBox\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExecuteSheet[] = {

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
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ExecuteSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExecuteSheet *_t = static_cast<ExecuteSheet *>(_o);
        switch (_id) {
        case 0: _t->stateUP_ES((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetHeaderBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExecuteSheet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExecuteSheet::stateUP_ES)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ExecuteSheet::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_ExecuteSheet.data,
      qt_meta_data_ExecuteSheet,  qt_static_metacall, 0, 0}
};


const QMetaObject *ExecuteSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExecuteSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExecuteSheet.stringdata))
        return static_cast<void*>(const_cast< ExecuteSheet*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int ExecuteSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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
void ExecuteSheet::stateUP_ES(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ExecuteSheet_R_t {
    QByteArrayData data[5];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ExecuteSheet_R_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ExecuteSheet_R_t qt_meta_stringdata_ExecuteSheet_R = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 9),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 5),
QT_MOC_LITERAL(4, 32, 12)
    },
    "ExecuteSheet_R\0stateUP_R\0\0state\0"
    "SetHeaderBox\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExecuteSheet_R[] = {

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
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ExecuteSheet_R::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExecuteSheet_R *_t = static_cast<ExecuteSheet_R *>(_o);
        switch (_id) {
        case 0: _t->stateUP_R((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetHeaderBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExecuteSheet_R::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExecuteSheet_R::stateUP_R)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ExecuteSheet_R::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_ExecuteSheet_R.data,
      qt_meta_data_ExecuteSheet_R,  qt_static_metacall, 0, 0}
};


const QMetaObject *ExecuteSheet_R::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExecuteSheet_R::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExecuteSheet_R.stringdata))
        return static_cast<void*>(const_cast< ExecuteSheet_R*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int ExecuteSheet_R::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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
void ExecuteSheet_R::stateUP_R(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
