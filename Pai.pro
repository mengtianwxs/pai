#-------------------------------------------------
#
# Project created by QtCreator 2018-08-16T08:06:08
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pai
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    l2draw/core/l2bar.cpp \
    l2draw/bars/l2snakebar.cpp \
    l2draw/methods/l2utils.cpp \
    l2draw/db/l2db.cpp \
    l2draw/bars/l2mbar.cpp \
    l2draw/bars/l2lebar.cpp \
    l2draw/bars/l2rebar.cpp \
    l2draw/bars/l2lbar.cpp \
    l2draw/bars/l2ubar.cpp \
    l2draw/bars/l2zbar.cpp \
    l2draw/bars/l2shipbar.cpp \
    l2draw/bars/l2ibar.cpp \
    l2draw/l2view.cpp \
    l2draw/l2manager.cpp \
    l2draw/widgets/l2snakewidget.cpp

HEADERS += \
        mainwindow.h \
    l2draw/l2headers.h \
    l2draw/core/l2bar.h \
    l2draw/bars/l2snakebar.h \
    l2draw/methods/l2utils.h \
    l2draw/db/l2db.h \
    l2draw/l2events.h \
    l2draw/bars/l2mbar.h \
    l2draw/bars/l2lebar.h \
    l2draw/bars/l2rebar.h \
    l2draw/bars/l2lbar.h \
    l2draw/bars/l2ubar.h \
    l2draw/bars/l2zbar.h \
    l2draw/bars/l2shipbar.h \
    l2draw/bars/l2ibar.h \
    l2draw/l2view.h \
    l2draw/l2manager.h \
    l2draw/widgets/l2snakewidget.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    rec.qrc
