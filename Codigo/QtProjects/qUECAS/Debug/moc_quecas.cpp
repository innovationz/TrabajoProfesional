/****************************************************************************
** Meta object code from reading C++ file 'quecas.h'
**
** Created: Sat May 25 13:05:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qUECAS/quecas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quecas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qUECAS[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    8,    7,    7, 0x05,
      35,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,    7,    7,    7, 0x08,
     142,   90,    7,    7, 0x08,
     195,    7,    7,    7, 0x08,
     219,   90,    7,    7, 0x08,
     276,    7,    7,    7, 0x08,
     310,    7,    7,    7, 0x08,
     334,    7,    7,    7, 0x08,
     356,    7,    7,    7, 0x08,
     377,    7,    7,    7, 0x08,
     418,  410,    7,    7, 0x08,
     445,  410,    7,    7, 0x08,
     472,  410,    7,    7, 0x08,
     499,    7,    7,    7, 0x08,
     528,    7,    7,    7, 0x08,
     554,    7,    7,    7, 0x08,
     580,    7,    7,    7, 0x08,
     606,    7,    7,    7, 0x08,
     632,    7,    7,    7, 0x08,
     658,    7,    7,    7, 0x08,
     682,    7,    7,    7, 0x08,
     708,    7,    7,    7, 0x08,
     734,    7,    7,    7, 0x08,
     760,    7,    7,    7, 0x08,
     797,  786,    7,    7, 0x08,
     835,    7,    7,    7, 0x08,
     859,    7,    7,    7, 0x08,
     886,    7,    7,    7, 0x08,
     919,  913,    7,    7, 0x08,
     938,    7,    7,    7, 0x08,
     957,    7,    7,    7, 0x08,
     981,  786,    7,    7, 0x08,
    1035, 1023,    7,    7, 0x08,
    1072, 1068,    7,    7, 0x28,
    1101,    7,    7,    7, 0x08,
    1132,    7,    7,    7, 0x08,
    1158,    7,    7,    7, 0x08,
    1191, 1185,    7,    7, 0x0a,
    1216,    8,    7,    7, 0x0a,
    1244,    8,    7,    7, 0x0a,
    1269,  913,    7,    7, 0x0a,
    1305,  913,    7,    7, 0x0a,
    1346,  913,    7,    7, 0x0a,
    1369,  913,    7,    7, 0x0a,
    1392,  913,    7,    7, 0x0a,
    1419, 1415,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qUECAS[] = {
    "qUECAS\0\0msg\0SendMsgToUART(QString)\0"
    "SendMsgToUART(QByteArray)\0"
    "on_actionVersion_triggered()\0"
    "currentRow,currentColumn,previousRow,previousColumn\0"
    "on_tablaUsuarios_currentCellChanged(int,int,int,int)\0"
    "on_btnAmpliar_clicked()\0"
    "on_tablaExperimentos_currentCellChanged(int,int,int,int)\0"
    "on_btnDeleteExperimento_clicked()\0"
    "on_btnDisparo_clicked()\0on_btnPause_clicked()\0"
    "on_btnStop_clicked()\0"
    "on_btnNuevoExperimento_clicked()\0"
    "checked\0on_Actuador3_toggled(bool)\0"
    "on_Actuador2_toggled(bool)\0"
    "on_Actuador1_toggled(bool)\0"
    "on_cleanLogRecieve_clicked()\0"
    "on_cleanLogSend_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_btnExportCSV_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_9_clicked()\0row,column\0"
    "on_tablaUsuarios_cellClicked(int,int)\0"
    "on_btnAddUser_clicked()\0"
    "on_btnDeleteUser_clicked()\0"
    "on_btnUpdateUser_clicked()\0value\0"
    "setNivelCarga(int)\0procesoTermiando()\0"
    "procesoCargaTerminado()\0"
    "on_tablaExperimentos_cellClicked(int,int)\0"
    "str,timeout\0changeTextStatusBar(QString,int)\0"
    "str\0changeTextStatusBar(QString)\0"
    "setProcesoDetensionTerminado()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_10_clicked()\0event\0"
    "closeEvent(QCloseEvent*)\0"
    "ReceiveMsgFromUART(QString)\0"
    "SendMsgFromUART(QString)\0"
    "setValueTensionFuenteDiagrama(uint)\0"
    "setValueTensionCapacitoresDiagrama(uint)\0"
    "ReceiveADC2Value(uint)\0ReceiveADC3Value(uint)\0"
    "ReceiveADC4Value(uint)\0cmd\0"
    "logCmdSend(cmdPcCom)\0"
};

void qUECAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qUECAS *_t = static_cast<qUECAS *>(_o);
        switch (_id) {
        case 0: _t->SendMsgToUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SendMsgToUART((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->on_actionVersion_triggered(); break;
        case 3: _t->on_tablaUsuarios_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->on_btnAmpliar_clicked(); break;
        case 5: _t->on_tablaExperimentos_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->on_btnDeleteExperimento_clicked(); break;
        case 7: _t->on_btnDisparo_clicked(); break;
        case 8: _t->on_btnPause_clicked(); break;
        case 9: _t->on_btnStop_clicked(); break;
        case 10: _t->on_btnNuevoExperimento_clicked(); break;
        case 11: _t->on_Actuador3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_Actuador2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_Actuador1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_cleanLogRecieve_clicked(); break;
        case 15: _t->on_cleanLogSend_clicked(); break;
        case 16: _t->on_pushButton_5_clicked(); break;
        case 17: _t->on_pushButton_6_clicked(); break;
        case 18: _t->on_pushButton_7_clicked(); break;
        case 19: _t->on_btnExportCSV_clicked(); break;
        case 20: _t->on_pushButton_clicked(); break;
        case 21: _t->on_pushButton_3_clicked(); break;
        case 22: _t->on_pushButton_8_clicked(); break;
        case 23: _t->on_pushButton_4_clicked(); break;
        case 24: _t->on_pushButton_9_clicked(); break;
        case 25: _t->on_tablaUsuarios_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->on_btnAddUser_clicked(); break;
        case 27: _t->on_btnDeleteUser_clicked(); break;
        case 28: _t->on_btnUpdateUser_clicked(); break;
        case 29: _t->setNivelCarga((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->procesoTermiando(); break;
        case 31: _t->procesoCargaTerminado(); break;
        case 32: _t->on_tablaExperimentos_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->changeTextStatusBar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->changeTextStatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->setProcesoDetensionTerminado(); break;
        case 36: _t->on_pushButton_2_clicked(); break;
        case 37: _t->on_pushButton_10_clicked(); break;
        case 38: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 39: _t->ReceiveMsgFromUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->SendMsgFromUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->setValueTensionFuenteDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 42: _t->setValueTensionCapacitoresDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 43: _t->ReceiveADC2Value((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->ReceiveADC3Value((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 45: _t->ReceiveADC4Value((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: _t->logCmdSend((*reinterpret_cast< cmdPcCom(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qUECAS::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qUECAS::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qUECAS,
      qt_meta_data_qUECAS, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qUECAS::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qUECAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qUECAS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qUECAS))
        return static_cast<void*>(const_cast< qUECAS*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qUECAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void qUECAS::SendMsgToUART(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qUECAS::SendMsgToUART(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
