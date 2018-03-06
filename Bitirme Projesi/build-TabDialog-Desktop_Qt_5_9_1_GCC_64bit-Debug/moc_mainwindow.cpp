/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TabDialog/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "changeTab"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "homeFunction"
QT_MOC_LITERAL(4, 35, 16), // "trainingFunction"
QT_MOC_LITERAL(5, 52, 19), // "recognitionFunction"
QT_MOC_LITERAL(6, 72, 8), // "read_csv"
QT_MOC_LITERAL(7, 81, 6), // "string"
QT_MOC_LITERAL(8, 88, 8), // "filename"
QT_MOC_LITERAL(9, 97, 12), // "vector<Mat>&"
QT_MOC_LITERAL(10, 110, 6), // "images"
QT_MOC_LITERAL(11, 117, 12), // "vector<int>&"
QT_MOC_LITERAL(12, 130, 6), // "labels"
QT_MOC_LITERAL(13, 137, 9), // "separator"
QT_MOC_LITERAL(14, 147, 22), // "on_tabWidget_destroyed"
QT_MOC_LITERAL(15, 170, 4), // "arg1"
QT_MOC_LITERAL(16, 175, 20), // "on_addPerson_clicked"
QT_MOC_LITERAL(17, 196, 20) // "on_addImages_clicked"

    },
    "MainWindow\0changeTab\0\0homeFunction\0"
    "trainingFunction\0recognitionFunction\0"
    "read_csv\0string\0filename\0vector<Mat>&\0"
    "images\0vector<int>&\0labels\0separator\0"
    "on_tabWidget_destroyed\0arg1\0"
    "on_addPerson_clicked\0on_addImages_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    4,   63,    2, 0x0a /* Public */,
       6,    3,   72,    2, 0x2a /* Public | MethodCloned */,
      14,    1,   79,    2, 0x08 /* Private */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Char,    8,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11,    8,   10,   12,
    QMetaType::Void, QMetaType::QObjectStar,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTab(); break;
        case 1: _t->homeFunction(); break;
        case 2: _t->trainingFunction(); break;
        case 3: _t->recognitionFunction(); break;
        case 4: _t->read_csv((*reinterpret_cast< const string(*)>(_a[1])),(*reinterpret_cast< vector<Mat>(*)>(_a[2])),(*reinterpret_cast< vector<int>(*)>(_a[3])),(*reinterpret_cast< char(*)>(_a[4]))); break;
        case 5: _t->read_csv((*reinterpret_cast< const string(*)>(_a[1])),(*reinterpret_cast< vector<Mat>(*)>(_a[2])),(*reinterpret_cast< vector<int>(*)>(_a[3]))); break;
        case 6: _t->on_tabWidget_destroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->on_addPerson_clicked(); break;
        case 8: _t->on_addImages_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
