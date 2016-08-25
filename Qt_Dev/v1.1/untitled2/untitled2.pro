#-------------------------------------------------
#
# Project created by QtCreator 2016-08-21T12:30:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tablemodel.cpp \
    checkboxdelegate.cpp \
    tableheaderview.cpp

HEADERS  += mainwindow.h \
    tablemodel.h \
    checkboxdelegate.h \
    tableheaderview.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    show.qss
