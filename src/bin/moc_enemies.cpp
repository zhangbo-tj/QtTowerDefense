/****************************************************************************
** Meta object code from reading C++ file 'enemies.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../enemies.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enemies.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Enemies_t {
    QByteArrayData data[11];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Enemies_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Enemies_t qt_meta_stringdata_Enemies = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Enemies"
QT_MOC_LITERAL(1, 8, 8), // "GetSpeed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "GetRunning"
QT_MOC_LITERAL(4, 29, 9), // "GetHealth"
QT_MOC_LITERAL(5, 39, 9), // "SetHealth"
QT_MOC_LITERAL(6, 49, 6), // "health"
QT_MOC_LITERAL(7, 56, 8), // "SetSpeed"
QT_MOC_LITERAL(8, 65, 5), // "speed"
QT_MOC_LITERAL(9, 71, 10), // "SetRunning"
QT_MOC_LITERAL(10, 82, 7) // "running"

    },
    "Enemies\0GetSpeed\0\0GetRunning\0GetHealth\0"
    "SetHealth\0health\0SetSpeed\0speed\0"
    "SetRunning\0running"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Enemies[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void Enemies::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Enemies *_t = static_cast<Enemies *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->GetSpeed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->GetRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->GetHealth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->SetHealth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SetRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Enemies::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Enemies.data,
      qt_meta_data_Enemies,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Enemies::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Enemies::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Enemies.stringdata0))
        return static_cast<void*>(const_cast< Enemies*>(this));
    return QObject::qt_metacast(_clname);
}

int Enemies::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
