#-------------------------------------------------
#
# Project created by QtCreator 2016-08-22T11:18:52
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_QSerialPort
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    uart4stm.cpp

HEADERS  += mainwindow.h \
    threadread.h \
    uart4stm.h

FORMS    += mainwindow.ui
