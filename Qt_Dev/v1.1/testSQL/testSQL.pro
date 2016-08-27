#-------------------------------------------------
#
# Project created by QtCreator 2016-08-12T19:02:14
#
#-------------------------------------------------

QT       += core gui
QT       += core sql
std        +=c++11
QT       += network
QT       +=serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testSQL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    popuppage.cpp \
    searchwindow.cpp \
    test.cpp \
    mainui.cpp \
    uart4stm.cpp \
    sigin.cpp

HEADERS  += mainwindow.h \
    connection.h \
    popuppage.h \
    searchwindow.h \
    test.h \
    mainui.h \
    threadread.h \
    uart4stm.h \
    global_Vailable.h \
    sigin.h

FORMS    += mainwindow.ui \
    popuppage.ui \
    searchwindow.ui \
    mainui.ui \
    sigin.ui

RESOURCES +=
