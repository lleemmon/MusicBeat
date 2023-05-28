/****************************************************************************
** Meta object code from reading C++ file 'updatagame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../musicbeat/updatagame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatagame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_updatagame_t {
    QByteArrayData data[15];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_updatagame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_updatagame_t qt_meta_stringdata_updatagame = {
    {
QT_MOC_LITERAL(0, 0, 10), // "updatagame"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 26), // "on_GameVolume_valueChanged"
QT_MOC_LITERAL(4, 61, 5), // "value"
QT_MOC_LITERAL(5, 67, 27), // "on_GameVolume1_valueChanged"
QT_MOC_LITERAL(6, 95, 4), // "arg1"
QT_MOC_LITERAL(7, 100, 25), // "on_KeyVolume_valueChanged"
QT_MOC_LITERAL(8, 126, 26), // "on_KeyVolume1_valueChanged"
QT_MOC_LITERAL(9, 153, 22), // "on_offest_valueChanged"
QT_MOC_LITERAL(10, 176, 23), // "on_offest1_valueChanged"
QT_MOC_LITERAL(11, 200, 24), // "on_KeySpeed_valueChanged"
QT_MOC_LITERAL(12, 225, 25), // "on_KeySpeed1_valueChanged"
QT_MOC_LITERAL(13, 251, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(14, 275, 23) // "on_pushButton_3_clicked"

    },
    "updatagame\0on_pushButton_clicked\0\0"
    "on_GameVolume_valueChanged\0value\0"
    "on_GameVolume1_valueChanged\0arg1\0"
    "on_KeyVolume_valueChanged\0"
    "on_KeyVolume1_valueChanged\0"
    "on_offest_valueChanged\0on_offest1_valueChanged\0"
    "on_KeySpeed_valueChanged\0"
    "on_KeySpeed1_valueChanged\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_updatagame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void updatagame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<updatagame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_GameVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_GameVolume1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_KeyVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_KeyVolume1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_offest_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_offest1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_KeySpeed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_KeySpeed1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject updatagame::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_updatagame.data,
    qt_meta_data_updatagame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *updatagame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *updatagame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_updatagame.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int updatagame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
