/****************************************************************************
** Meta object code from reading C++ file 'returnpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/returnpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'returnpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReturnPage_t {
    QByteArrayData data[20];
    char stringdata[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ReturnPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ReturnPage_t qt_meta_stringdata_ReturnPage = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 29),
QT_MOC_LITERAL(4, 63, 6),
QT_MOC_LITERAL(5, 70, 7),
QT_MOC_LITERAL(6, 78, 10),
QT_MOC_LITERAL(7, 89, 18),
QT_MOC_LITERAL(8, 108, 5),
QT_MOC_LITERAL(9, 114, 24),
QT_MOC_LITERAL(10, 139, 24),
QT_MOC_LITERAL(11, 164, 21),
QT_MOC_LITERAL(12, 186, 20),
QT_MOC_LITERAL(13, 207, 17),
QT_MOC_LITERAL(14, 225, 7),
QT_MOC_LITERAL(15, 233, 13),
QT_MOC_LITERAL(16, 247, 6),
QT_MOC_LITERAL(17, 254, 19),
QT_MOC_LITERAL(18, 274, 9),
QT_MOC_LITERAL(19, 284, 12)
    },
    "ReturnPage\0returnPage_To_MainUi\0\0"
    "sendInfo_To_AgentiaInfoChange\0status\0"
    "OK_Push\0sheetOrder\0stateUp_ReturnPage\0"
    "state\0on_Bt_backBefore_clicked\0"
    "on_Bt_searchInfo_clicked\0on_Bt_execute_clicked\0"
    "on_Bt_delete_clicked\0on_Bt_add_clicked\0"
    "onState\0receiveAddNew\0option\0"
    "upSheet_PutInWindow\0closePage\0"
    "setPBTEnable\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReturnPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06,
       3,    3,   80,    2, 0x06,
       7,    1,   87,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   90,    2, 0x08,
      10,    0,   91,    2, 0x08,
      11,    0,   92,    2, 0x08,
      12,    0,   93,    2, 0x08,
      13,    0,   94,    2, 0x08,
      14,    1,   95,    2, 0x08,
      15,    1,   98,    2, 0x08,
      17,    0,  101,    2, 0x08,
      18,    0,  102,    2, 0x08,
      19,    1,  103,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ReturnPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReturnPage *_t = static_cast<ReturnPage *>(_o);
        switch (_id) {
        case 0: _t->returnPage_To_MainUi(); break;
        case 1: _t->sendInfo_To_AgentiaInfoChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->stateUp_ReturnPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Bt_backBefore_clicked(); break;
        case 4: _t->on_Bt_searchInfo_clicked(); break;
        case 5: _t->on_Bt_execute_clicked(); break;
        case 6: _t->on_Bt_delete_clicked(); break;
        case 7: _t->on_Bt_add_clicked(); break;
        case 8: _t->onState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->receiveAddNew((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->upSheet_PutInWindow(); break;
        case 11: _t->closePage(); break;
        case 12: _t->setPBTEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReturnPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReturnPage::returnPage_To_MainUi)) {
                *result = 0;
            }
        }
        {
            typedef void (ReturnPage::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReturnPage::sendInfo_To_AgentiaInfoChange)) {
                *result = 1;
            }
        }
        {
            typedef void (ReturnPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReturnPage::stateUp_ReturnPage)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ReturnPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReturnPage.data,
      qt_meta_data_ReturnPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *ReturnPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReturnPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReturnPage.stringdata))
        return static_cast<void*>(const_cast< ReturnPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReturnPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ReturnPage::returnPage_To_MainUi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ReturnPage::sendInfo_To_AgentiaInfoChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReturnPage::stateUp_ReturnPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
