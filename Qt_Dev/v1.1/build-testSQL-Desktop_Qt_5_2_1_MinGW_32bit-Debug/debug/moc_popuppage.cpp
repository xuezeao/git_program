/****************************************************************************
** Meta object code from reading C++ file 'popuppage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testSQL/popuppage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popuppage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_popupPage_t {
    QByteArrayData data[11];
    char stringdata[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_popupPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_popupPage_t qt_meta_stringdata_popupPage = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 13),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 9),
QT_MOC_LITERAL(4, 35, 8),
QT_MOC_LITERAL(5, 44, 40),
QT_MOC_LITERAL(6, 85, 32),
QT_MOC_LITERAL(7, 118, 36),
QT_MOC_LITERAL(8, 155, 8),
QT_MOC_LITERAL(9, 164, 14),
QT_MOC_LITERAL(10, 179, 5)
    },
    "popupPage\0backplacepage\0\0backGPage\0"
    "stopWait\0on_pushButton_backPreviousOption_clicked\0"
    "on_pushButton_placedNext_clicked\0"
    "on_pushButton_jumpThisOption_clicked\0"
    "finished\0QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_popupPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,
       3,    0,   50,    2, 0x06,
       4,    0,   51,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    1,   55,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void popupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        popupPage *_t = static_cast<popupPage *>(_o);
        switch (_id) {
        case 0: _t->backplacepage(); break;
        case 1: _t->backGPage(); break;
        case 2: _t->stopWait(); break;
        case 3: _t->on_pushButton_backPreviousOption_clicked(); break;
        case 4: _t->on_pushButton_placedNext_clicked(); break;
        case 5: _t->on_pushButton_jumpThisOption_clicked(); break;
        case 6: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            typedef void (popupPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&popupPage::backplacepage)) {
                *result = 0;
            }
        }
        {
            typedef void (popupPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&popupPage::backGPage)) {
                *result = 1;
            }
        }
        {
            typedef void (popupPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&popupPage::stopWait)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject popupPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_popupPage.data,
      qt_meta_data_popupPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *popupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *popupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_popupPage.stringdata))
        return static_cast<void*>(const_cast< popupPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int popupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void popupPage::backplacepage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void popupPage::backGPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void popupPage::stopWait()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
