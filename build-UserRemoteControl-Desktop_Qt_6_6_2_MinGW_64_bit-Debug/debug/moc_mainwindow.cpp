/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UserRemoteControl/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "readBatteryData",
    "",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "updateBatteryProgressBar",
    "power",
    "updateHistoricalData",
    "on_button0_clicked",
    "on_button45_clicked",
    "on_button90_clicked",
    "on_button135_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "deactivateLaser",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled",
    "updateCurrentTime"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[11];
    char stringdata6[17];
    char stringdata7[5];
    char stringdata8[19];
    char stringdata9[25];
    char stringdata10[6];
    char stringdata11[21];
    char stringdata12[19];
    char stringdata13[20];
    char stringdata14[20];
    char stringdata15[21];
    char stringdata16[21];
    char stringdata17[31];
    char stringdata18[6];
    char stringdata19[23];
    char stringdata20[16];
    char stringdata21[24];
    char stringdata22[21];
    char stringdata23[6];
    char stringdata24[9];
    char stringdata25[22];
    char stringdata26[16];
    char stringdata27[16];
    char stringdata28[18];
    char stringdata29[7];
    char stringdata30[17];
    char stringdata31[8];
    char stringdata32[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "readBatteryData"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 11),  // "updateServo"
        QT_MOC_LITERAL(40, 7),  // "command"
        QT_MOC_LITERAL(48, 10),  // "readSerial"
        QT_MOC_LITERAL(59, 16),  // "processRadarData"
        QT_MOC_LITERAL(76, 4),  // "data"
        QT_MOC_LITERAL(81, 18),  // "processBatteryData"
        QT_MOC_LITERAL(100, 24),  // "updateBatteryProgressBar"
        QT_MOC_LITERAL(125, 5),  // "power"
        QT_MOC_LITERAL(131, 20),  // "updateHistoricalData"
        QT_MOC_LITERAL(152, 18),  // "on_button0_clicked"
        QT_MOC_LITERAL(171, 19),  // "on_button45_clicked"
        QT_MOC_LITERAL(191, 19),  // "on_button90_clicked"
        QT_MOC_LITERAL(211, 20),  // "on_button135_clicked"
        QT_MOC_LITERAL(232, 20),  // "on_button180_clicked"
        QT_MOC_LITERAL(253, 30),  // "on_verticalSlider_valueChanged"
        QT_MOC_LITERAL(284, 5),  // "value"
        QT_MOC_LITERAL(290, 22),  // "on_button_auto_clicked"
        QT_MOC_LITERAL(313, 15),  // "updateServoAuto"
        QT_MOC_LITERAL(329, 23),  // "clearOldDetectionPoints"
        QT_MOC_LITERAL(353, 20),  // "updateDetectionPoint"
        QT_MOC_LITERAL(374, 5),  // "angle"
        QT_MOC_LITERAL(380, 8),  // "distance"
        QT_MOC_LITERAL(389, 21),  // "handleLaserActivation"
        QT_MOC_LITERAL(411, 15),  // "deactivateLaser"
        QT_MOC_LITERAL(427, 15),  // "resumeOperation"
        QT_MOC_LITERAL(443, 17),  // "updateLaserStatus"
        QT_MOC_LITERAL(461, 6),  // "status"
        QT_MOC_LITERAL(468, 16),  // "setSliderEnabled"
        QT_MOC_LITERAL(485, 7),  // "enabled"
        QT_MOC_LITERAL(493, 17)   // "updateCurrentTime"
    },
    "MainWindow",
    "readBatteryData",
    "",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "updateBatteryProgressBar",
    "power",
    "updateHistoricalData",
    "on_button0_clicked",
    "on_button45_clicked",
    "on_button90_clicked",
    "on_button135_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "deactivateLaser",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled",
    "updateCurrentTime"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    1,  153,    2, 0x08,    2 /* Private */,
       5,    0,  156,    2, 0x08,    4 /* Private */,
       6,    1,  157,    2, 0x08,    5 /* Private */,
       8,    1,  160,    2, 0x08,    7 /* Private */,
       9,    1,  163,    2, 0x08,    9 /* Private */,
      11,    0,  166,    2, 0x08,   11 /* Private */,
      12,    0,  167,    2, 0x08,   12 /* Private */,
      13,    0,  168,    2, 0x08,   13 /* Private */,
      14,    0,  169,    2, 0x08,   14 /* Private */,
      15,    0,  170,    2, 0x08,   15 /* Private */,
      16,    0,  171,    2, 0x08,   16 /* Private */,
      17,    1,  172,    2, 0x08,   17 /* Private */,
      19,    0,  175,    2, 0x08,   19 /* Private */,
      20,    0,  176,    2, 0x08,   20 /* Private */,
      21,    0,  177,    2, 0x08,   21 /* Private */,
      22,    2,  178,    2, 0x08,   22 /* Private */,
      25,    0,  183,    2, 0x08,   25 /* Private */,
      26,    0,  184,    2, 0x08,   26 /* Private */,
      27,    0,  185,    2, 0x08,   27 /* Private */,
      28,    1,  186,    2, 0x08,   28 /* Private */,
      30,    1,  189,    2, 0x08,   30 /* Private */,
      32,    0,  192,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'readBatteryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateServo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'readSerial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processRadarData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'processBatteryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateBatteryProgressBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateHistoricalData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button45_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button90_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button135_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button180_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_button_auto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateServoAuto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearOldDetectionPoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDetectionPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'handleLaserActivation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deactivateLaser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeOperation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLaserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSliderEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readBatteryData(); break;
        case 1: _t->updateServo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->readSerial(); break;
        case 3: _t->processRadarData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->processBatteryData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->updateBatteryProgressBar((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->updateHistoricalData(); break;
        case 7: _t->on_button0_clicked(); break;
        case 8: _t->on_button45_clicked(); break;
        case 9: _t->on_button90_clicked(); break;
        case 10: _t->on_button135_clicked(); break;
        case 11: _t->on_button180_clicked(); break;
        case 12: _t->on_verticalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_button_auto_clicked(); break;
        case 14: _t->updateServoAuto(); break;
        case 15: _t->clearOldDetectionPoints(); break;
        case 16: _t->updateDetectionPoint((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 17: _t->handleLaserActivation(); break;
        case 18: _t->deactivateLaser(); break;
        case 19: _t->resumeOperation(); break;
        case 20: _t->updateLaserStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setSliderEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->updateCurrentTime(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
