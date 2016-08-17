/****************************************************************************
** Meta object code from reading C++ file 'enterchestopration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../program_test/enterchestopration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enterchestopration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_enterChestOpration_t {
    QByteArrayData data[4];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_enterChestOpration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_enterChestOpration_t qt_meta_stringdata_enterChestOpration = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 22),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 50)
    },
    "enterChestOpration\0enterChestOprationExit\0"
    "\0on_pushButton_cancelOprationReturnChoiceUi_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_enterChestOpration[] = {

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
       1,    0,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void enterChestOpration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        enterChestOpration *_t = static_cast<enterChestOpration *>(_o);
        switch (_id) {
        case 0: _t->enterChestOprationExit(); break;
        case 1: _t->on_pushButton_cancelOprationReturnChoiceUi_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (enterChestOpration::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&enterChestOpration::enterChestOprationExit)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject enterChestOpration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_enterChestOpration.data,
      qt_meta_data_enterChestOpration,  qt_static_metacall, 0, 0}
};


const QMetaObject *enterChestOpration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *enterChestOpration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_enterChestOpration.stringdata))
        return static_cast<void*>(const_cast< enterChestOpration*>(this));
    return QWidget::qt_metacast(_clname);
}

int enterChestOpration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void enterChestOpration::enterChestOprationExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
