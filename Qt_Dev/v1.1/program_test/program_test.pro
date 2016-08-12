#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T08:19:09
#
#-------------------------------------------------

QT       += core gui
QT       += core sql
QT       += serialport
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = program_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    first.cpp \
    second.cpp \
    testcomandhttp.cpp \
    signin.cpp \
    placereagent.cpp \
    relationaltablemodel.cpp \
    mysqlquerymodel.cpp

HEADERS  += mainwindow.h \
    second.h \
    testcomandhttp.h \
    signin.h \
    first.h \
    placereagent.h \
    connection.h \
    relationaltablemodel.h \
    mysqlquerymodel.h

FORMS    += mainwindow.ui \
    first.ui \
    second.ui \
    testcomandhttp.ui \
    signin.ui \
    placereagent.ui \
    relationaltablemodel.ui
