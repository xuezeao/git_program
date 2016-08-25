/****************************************************************************
** Meta object code from reading C++ file 'searchwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testSQL/searchwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_searchWindow_t {
    QByteArrayData data[10];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_searchWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_searchWindow_t qt_meta_stringdata_searchWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "searchWindow"
QT_MOC_LITERAL(1, 13, 13), // "GPageToMainUi"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "addNewsToApplySheet"
QT_MOC_LITERAL(4, 48, 21), // "delNewsFromApplySheet"
QT_MOC_LITERAL(5, 70, 32), // "on_pushButton_searchNews_clicked"
QT_MOC_LITERAL(6, 103, 33), // "on_pushButton_delThisNews_cli..."
QT_MOC_LITERAL(7, 137, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(8, 166, 18), // "operatePage_To_SEA"
QT_MOC_LITERAL(9, 185, 35) // "on_pushButton_sureNewsApply_c..."

    },
    "searchWindow\0GPageToMainUi\0\0"
    "addNewsToApplySheet\0delNewsFromApplySheet\0"
    "on_pushButton_searchNews_clicked\0"
    "on_pushButton_delThisNews_clicked\0"
    "on_commandLinkButton_clicked\0"
    "operatePage_To_SEA\0"
    "on_pushButton_sureNewsApply_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_searchWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

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

       0        // eod
};

void searchWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        searchWindow *_t = static_cast<searchWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GPageToMainUi(); break;
        case 1: _t->addNewsToApplySheet(); break;
        case 2: _t->delNewsFromApplySheet(); break;
        case 3: _t->on_pushButton_searchNews_clicked(); break;
        case 4: _t->on_pushButton_delThisNews_clicked(); break;
        case 5: _t->on_commandLinkButton_clicked(); break;
        case 6: _t->operatePage_To_SEA(); break;
        case 7: _t->on_pushButton_sureNewsApply_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (searchWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&searchWindow::GPageToMainUi)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject searchWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_searchWindow.data,
      qt_meta_data_searchWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *searchWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *searchWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_searchWindow.stringdata0))
        return static_cast<void*>(const_cast< searchWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int searchWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void searchWindow::GPageToMainUi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
