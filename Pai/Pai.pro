#-------------------------------------------------
#
# Project created by QtCreator 2018-08-16T08:06:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pai
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
    l2draw/methods/l2utils.cpp

HEADERS += \
        mainwindow.h \
    l2draw/l2headers.h \
    l2draw/core/l2bar.h \
    l2draw/bars/l2snakebar.h \
    l2draw/methods/l2utils.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    rec.qrc
