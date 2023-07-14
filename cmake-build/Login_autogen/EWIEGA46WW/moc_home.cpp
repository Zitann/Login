/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../home.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Home_t {
    const uint offsetsAndSize[20];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Home_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Home_t qt_meta_stringdata_Home = {
    {
QT_MOC_LITERAL(0, 4), // "Home"
QT_MOC_LITERAL(5, 16), // "on_close_clicked"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 14), // "on_min_clicked"
QT_MOC_LITERAL(38, 15), // "on_quit_clicked"
QT_MOC_LITERAL(54, 17), // "on_search_clicked"
QT_MOC_LITERAL(72, 16), // "on_allow_clicked"
QT_MOC_LITERAL(89, 20), // "on_forbidden_clicked"
QT_MOC_LITERAL(110, 19), // "on_delete_2_clicked"
QT_MOC_LITERAL(130, 19) // "on_change_2_clicked"

    },
    "Home\0on_close_clicked\0\0on_min_clicked\0"
    "on_quit_clicked\0on_search_clicked\0"
    "on_allow_clicked\0on_forbidden_clicked\0"
    "on_delete_2_clicked\0on_change_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Home[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_min_clicked(); break;
        case 2: _t->on_quit_clicked(); break;
        case 3: _t->on_search_clicked(); break;
        case 4: _t->on_allow_clicked(); break;
        case 5: _t->on_forbidden_clicked(); break;
        case 6: _t->on_delete_2_clicked(); break;
        case 7: _t->on_change_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Home::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Home.offsetsAndSize,
    qt_meta_data_Home,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Home_t
, QtPrivate::TypeAndForceComplete<Home, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Home.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
