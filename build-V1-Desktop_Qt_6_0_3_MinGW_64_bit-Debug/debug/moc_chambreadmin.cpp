/****************************************************************************
** Meta object code from reading C++ file 'chambreadmin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../V1/chambreadmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chambreadmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChambreAdmin_t {
    const uint offsetsAndSize[14];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ChambreAdmin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ChambreAdmin_t qt_meta_stringdata_ChambreAdmin = {
    {
QT_MOC_LITERAL(0, 12), // "ChambreAdmin"
QT_MOC_LITERAL(13, 34), // "on_tableViewchambreadmin_acti..."
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 11), // "QModelIndex"
QT_MOC_LITERAL(61, 5), // "index"
QT_MOC_LITERAL(67, 29), // "on_ajouterchambre_btn_clicked"
QT_MOC_LITERAL(97, 39) // "on_cherchambreadmin_txt_editi..."

    },
    "ChambreAdmin\0on_tableViewchambreadmin_activated\0"
    "\0QModelIndex\0index\0on_ajouterchambre_btn_clicked\0"
    "on_cherchambreadmin_txt_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChambreAdmin[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    0 /* Private */,
       5,    0,   35,    2, 0x08,    2 /* Private */,
       6,    0,   36,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChambreAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChambreAdmin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableViewchambreadmin_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_ajouterchambre_btn_clicked(); break;
        case 2: _t->on_cherchambreadmin_txt_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject ChambreAdmin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ChambreAdmin.offsetsAndSize,
    qt_meta_data_ChambreAdmin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChambreAdmin_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChambreAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChambreAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChambreAdmin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChambreAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
