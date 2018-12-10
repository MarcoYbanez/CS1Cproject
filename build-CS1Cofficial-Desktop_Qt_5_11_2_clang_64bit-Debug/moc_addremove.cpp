/****************************************************************************
** Meta object code from reading C++ file 'addremove.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1Cofficial/addremove.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addremove.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addRemove_t {
    QByteArrayData data[16];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addRemove_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addRemove_t qt_meta_stringdata_addRemove = {
    {
QT_MOC_LITERAL(0, 0, 9), // "addRemove"
QT_MOC_LITERAL(1, 10, 15), // "on_Back_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "on_radioAdd_clicked"
QT_MOC_LITERAL(4, 47, 22), // "on_radioRemove_clicked"
QT_MOC_LITERAL(5, 70, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(6, 102, 5), // "index"
QT_MOC_LITERAL(7, 108, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(8, 130, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(9, 152, 22), // "on_confirmAdd_accepted"
QT_MOC_LITERAL(10, 175, 22), // "on_confirmAdd_rejected"
QT_MOC_LITERAL(11, 198, 13), // "clearAddInput"
QT_MOC_LITERAL(12, 212, 32), // "on_semiMinorAxis_editingFinished"
QT_MOC_LITERAL(13, 245, 25), // "on_lineY2_editingFinished"
QT_MOC_LITERAL(14, 271, 28), // "on_textWidth_editingFinished"
QT_MOC_LITERAL(15, 300, 28) // "on_rectWidth_editingFinished"

    },
    "addRemove\0on_Back_clicked\0\0"
    "on_radioAdd_clicked\0on_radioRemove_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_confirmAdd_accepted\0on_confirmAdd_rejected\0"
    "clearAddInput\0on_semiMinorAxis_editingFinished\0"
    "on_lineY2_editingFinished\0"
    "on_textWidth_editingFinished\0"
    "on_rectWidth_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addRemove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
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

void addRemove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addRemove *_t = static_cast<addRemove *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Back_clicked(); break;
        case 1: _t->on_radioAdd_clicked(); break;
        case 2: _t->on_radioRemove_clicked(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        case 6: _t->on_confirmAdd_accepted(); break;
        case 7: _t->on_confirmAdd_rejected(); break;
        case 8: _t->clearAddInput(); break;
        case 9: _t->on_semiMinorAxis_editingFinished(); break;
        case 10: _t->on_lineY2_editingFinished(); break;
        case 11: _t->on_textWidth_editingFinished(); break;
        case 12: _t->on_rectWidth_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addRemove::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_addRemove.data,
      qt_meta_data_addRemove,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addRemove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addRemove::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addRemove.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int addRemove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
