/****************************************************************************
** Meta object code from reading C++ file 'caspianwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../caspianwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caspianwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCaspianWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCaspianWindowENDCLASS = QtMocHelpers::stringData(
    "CaspianWindow",
    "on_button_c_village_clicked",
    "",
    "on_listWidget_cas_crew_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_button_c_lighthouse_clicked",
    "on_button_c_oasis_clicked",
    "on_button_c_oil_clicked",
    "on_button_c_safehouse_clicked",
    "on_button_c_ship_clicked",
    "on_button_c_jail_clicked",
    "on_button_c_sniper_clicked",
    "on_button_cas_continue_clicked",
    "on_button_cas_talk_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCaspianWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    1,   81,    2, 0x08,    2 /* Private */,
       6,    0,   84,    2, 0x08,    4 /* Private */,
       7,    0,   85,    2, 0x08,    5 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    0,   88,    2, 0x08,    8 /* Private */,
      11,    0,   89,    2, 0x08,    9 /* Private */,
      12,    0,   90,    2, 0x08,   10 /* Private */,
      13,    0,   91,    2, 0x08,   11 /* Private */,
      14,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
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

Q_CONSTINIT const QMetaObject CaspianWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSCaspianWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCaspianWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCaspianWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CaspianWindow, std::true_type>,
        // method 'on_button_c_village_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_cas_crew_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_button_c_lighthouse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_oasis_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_oil_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_safehouse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_ship_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_jail_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_sniper_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_cas_continue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_cas_talk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CaspianWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaspianWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_button_c_village_clicked(); break;
        case 1: _t->on_listWidget_cas_crew_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 2: _t->on_button_c_lighthouse_clicked(); break;
        case 3: _t->on_button_c_oasis_clicked(); break;
        case 4: _t->on_button_c_oil_clicked(); break;
        case 5: _t->on_button_c_safehouse_clicked(); break;
        case 6: _t->on_button_c_ship_clicked(); break;
        case 7: _t->on_button_c_jail_clicked(); break;
        case 8: _t->on_button_c_sniper_clicked(); break;
        case 9: _t->on_button_cas_continue_clicked(); break;
        case 10: _t->on_button_cas_talk_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *CaspianWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaspianWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCaspianWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CaspianWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
