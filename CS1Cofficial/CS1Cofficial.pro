#-------------------------------------------------
#
# Project created by QtCreator 2018-11-09T18:47:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1Cofficial
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG+=sdk_no_version_check

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    contact.cpp \
    login.cpp \
    drawwt.cpp \
    addremove.cpp

HEADERS += \
        mainwindow.h \
    ellipse.h \
    line.h \
    polygon.h \
    polyline.h \
    rectangle.h \
    shape.h \
    text.h \
    contact.h \
    login.h \
    drawwt.h \
    vector.h \
    square.h \
    circle.h \
    text.h \
    data.h \
    addremove.h

FORMS += \
        mainwindow.ui \
    contact.ui \
    login.ui \
    addremove.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    logo.png \
    shapes.txt

RESOURCES += \
    assets/assets.qrc
