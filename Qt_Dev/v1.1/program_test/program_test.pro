#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T08:19:09
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = program_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    first.cpp \
    second.cpp \
    testcomandhttp.cpp

HEADERS  += mainwindow.h \
    first.h \
    second.h \
    testcomandhttp.h

FORMS    += mainwindow.ui \
    first.ui \
    second.ui \
    testcomandhttp.ui
