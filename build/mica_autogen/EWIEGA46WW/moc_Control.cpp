/****************************************************************************
** Meta object code from reading C++ file 'Control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Control_t {
    QByteArrayData data[20];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Control_t qt_meta_stringdata_Control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Control"
QT_MOC_LITERAL(1, 8, 7), // "setText"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "text"
QT_MOC_LITERAL(4, 22, 16), // "setTextAlignment"
QT_MOC_LITERAL(5, 39, 13), // "Qt::Alignment"
QT_MOC_LITERAL(6, 53, 9), // "alignment"
QT_MOC_LITERAL(7, 63, 13), // "textAlignment"
QT_MOC_LITERAL(8, 77, 10), // "setPadding"
QT_MOC_LITERAL(9, 88, 8), // "QMargins"
QT_MOC_LITERAL(10, 97, 7), // "padding"
QT_MOC_LITERAL(11, 105, 7), // "setFont"
QT_MOC_LITERAL(12, 113, 4), // "font"
QT_MOC_LITERAL(13, 118, 18), // "setBorderThickness"
QT_MOC_LITERAL(14, 137, 9), // "thickness"
QT_MOC_LITERAL(15, 147, 15), // "borderThickness"
QT_MOC_LITERAL(16, 163, 15), // "setBorderRadius"
QT_MOC_LITERAL(17, 179, 12), // "BorderRadius"
QT_MOC_LITERAL(18, 192, 6), // "radius"
QT_MOC_LITERAL(19, 199, 12) // "borderRadius"

    },
    "Control\0setText\0\0text\0setTextAlignment\0"
    "Qt::Alignment\0alignment\0textAlignment\0"
    "setPadding\0QMargins\0padding\0setFont\0"
    "font\0setBorderThickness\0thickness\0"
    "borderThickness\0setBorderRadius\0"
    "BorderRadius\0radius\0borderRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Control[] = {

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
       1,    1,   69,    2, 0x0a /* Public */,
       3,    0,   72,    2, 0x0a /* Public */,
       4,    1,   73,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    1,   77,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,
      16,    1,   88,    2, 0x0a /* Public */,
      19,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::QFont,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 17,   18,
    0x80000000 | 17,

       0        // eod
};

void Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Control *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setTextAlignment((*reinterpret_cast< const Qt::Alignment(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->textAlignment();
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setPadding((*reinterpret_cast< const QMargins(*)>(_a[1]))); break;
        case 5: { QMargins _r = _t->padding();
            if (_a[0]) *reinterpret_cast< QMargins*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 7: _t->setBorderThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { int _r = _t->borderThickness();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setBorderRadius((*reinterpret_cast< BorderRadius(*)>(_a[1]))); break;
        case 10: { BorderRadius _r = _t->borderRadius();
            if (_a[0]) *reinterpret_cast< BorderRadius*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Control::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Control.data,
    qt_meta_data_Control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Control.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
