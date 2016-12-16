/****************************************************************************
** Meta object code from reading C++ file 'operatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_one/operatewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'operatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OperateWindow_t {
    QByteArrayData data[27];
    char stringdata[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OperateWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OperateWindow_t qt_meta_stringdata_OperateWindow = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 23),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 29),
QT_MOC_LITERAL(4, 69, 6),
QT_MOC_LITERAL(5, 76, 7),
QT_MOC_LITERAL(6, 84, 10),
QT_MOC_LITERAL(7, 95, 19),
QT_MOC_LITERAL(8, 115, 5),
QT_MOC_LITERAL(9, 121, 42),
QT_MOC_LITERAL(10, 164, 24),
QT_MOC_LITERAL(11, 189, 24),
QT_MOC_LITERAL(12, 214, 21),
QT_MOC_LITERAL(13, 236, 20),
QT_MOC_LITERAL(14, 257, 17),
QT_MOC_LITERAL(15, 275, 7),
QT_MOC_LITERAL(16, 283, 13),
QT_MOC_LITERAL(17, 297, 6),
QT_MOC_LITERAL(18, 304, 19),
QT_MOC_LITERAL(19, 324, 26),
QT_MOC_LITERAL(20, 351, 9),
QT_MOC_LITERAL(21, 361, 26),
QT_MOC_LITERAL(22, 388, 14),
QT_MOC_LITERAL(23, 403, 6),
QT_MOC_LITERAL(24, 410, 8),
QT_MOC_LITERAL(25, 419, 10),
QT_MOC_LITERAL(26, 430, 17)
    },
    "OperateWindow\0OperateWindow_To_MainUI\0"
    "\0sendInfo_To_AgentiaInfoChange\0status\0"
    "OK_Push\0sheetOrder\0stateUp_OperatePage\0"
    "state\0sendInfo_To_agentiaInfoChangePageForEnable\0"
    "on_Bt_backBefore_clicked\0"
    "on_Bt_searchInfo_clicked\0on_Bt_execute_clicked\0"
    "on_Bt_delete_clicked\0on_Bt_add_clicked\0"
    "onState\0receiveAddNew\0option\0"
    "upSheet_PutInWindow\0on_Bt_changeInfo_A_clicked\0"
    "closePage\0on_pBt_getPosition_clicked\0"
    "updatePosition\0drawer\0position\0"
    "positionId\0OperateError_info\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OperateWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06,
       3,    3,  100,    2, 0x06,
       7,    1,  107,    2, 0x06,
       9,    1,  110,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,  113,    2, 0x08,
      11,    0,  114,    2, 0x08,
      12,    0,  115,    2, 0x08,
      13,    0,  116,    2, 0x08,
      14,    0,  117,    2, 0x08,
      15,    1,  118,    2, 0x08,
      16,    1,  121,    2, 0x08,
      18,    0,  124,    2, 0x08,
      19,    0,  125,    2, 0x08,
      20,    0,  126,    2, 0x08,
      21,    0,  127,    2, 0x08,
      22,    3,  128,    2, 0x08,
      26,    1,  135,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   24,   25,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void OperateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OperateWindow *_t = static_cast<OperateWindow *>(_o);
        switch (_id) {
        case 0: _t->OperateWindow_To_MainUI(); break;
        case 1: _t->sendInfo_To_AgentiaInfoChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->stateUp_OperatePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendInfo_To_agentiaInfoChangePageForEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Bt_backBefore_clicked(); break;
        case 5: _t->on_Bt_searchInfo_clicked(); break;
        case 6: _t->on_Bt_execute_clicked(); break;
        case 7: _t->on_Bt_delete_clicked(); break;
        case 8: _t->on_Bt_add_clicked(); break;
        case 9: _t->onState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->receiveAddNew((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->upSheet_PutInWindow(); break;
        case 12: _t->on_Bt_changeInfo_A_clicked(); break;
        case 13: _t->closePage(); break;
        case 14: _t->on_pBt_getPosition_clicked(); break;
        case 15: _t->updatePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->OperateError_info((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OperateWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OperateWindow::OperateWindow_To_MainUI)) {
                *result = 0;
            }
        }
        {
            typedef void (OperateWindow::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OperateWindow::sendInfo_To_AgentiaInfoChange)) {
                *result = 1;
            }
        }
        {
            typedef void (OperateWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OperateWindow::stateUp_OperatePage)) {
                *result = 2;
            }
        }
        {
            typedef void (OperateWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OperateWindow::sendInfo_To_agentiaInfoChangePageForEnable)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OperateWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OperateWindow.data,
      qt_meta_data_OperateWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *OperateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OperateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OperateWindow.stringdata))
        return static_cast<void*>(const_cast< OperateWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int OperateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void OperateWindow::OperateWindow_To_MainUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OperateWindow::sendInfo_To_AgentiaInfoChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OperateWindow::stateUp_OperatePage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OperateWindow::sendInfo_To_agentiaInfoChangePageForEnable(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
