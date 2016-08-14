#-------------------------------------------------
#
# Project created by QtCreator 2016-08-12T19:02:14
#
#-------------------------------------------------

QT       += core gui
QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testSQL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    popuppage.cpp

HEADERS  += mainwindow.h \
    connection.h \
    popuppage.h

FORMS    += mainwindow.ui \
    popuppage.ui
