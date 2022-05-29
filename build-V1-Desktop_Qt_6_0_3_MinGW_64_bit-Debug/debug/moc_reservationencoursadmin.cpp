/****************************************************************************
** Meta object code from reading C++ file 'reservationencoursadmin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../V1/reservationencoursadmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reservationencoursadmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReservationEnCoursAdmin_t {
    const uint offsetsAndSize[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ReservationEnCoursAdmin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ReservationEnCoursAdmin_t qt_meta_stringdata_ReservationEnCoursAdmin = {
    {
QT_MOC_LITERAL(0, 23), // "ReservationEnCoursAdmin"
QT_MOC_LITERAL(24, 42), // "on_rechresencoursadmin_txt_ed..."
QT_MOC_LITERAL(67, 0) // ""

    },
    "ReservationEnCoursAdmin\0"
    "on_rechresencoursadmin_txt_editingFinished\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReservationEnCoursAdmin[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    0 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ReservationEnCoursAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReservationEnCoursAdmin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_rechresencoursadmin_txt_editingFinished(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ReservationEnCoursAdmin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReservationEnCoursAdmin.offsetsAndSize,
    qt_meta_data_ReservationEnCoursAdmin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ReservationEnCoursAdmin_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ReservationEnCoursAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReservationEnCoursAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReservationEnCoursAdmin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReservationEnCoursAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
