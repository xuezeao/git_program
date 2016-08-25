#-------------------------------------------------
#
# Project created by QtCreator 2016-08-22T13:21:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nettest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    reagentppage.cpp \
    dialog_p.cpp \
    reagentgpage.cpp

HEADERS  += mainwindow.h \
    reagentppage.h \
    dialog_p.h \
    reagentgpage.h \
    connection.h

FORMS    += mainwindow.ui \
    reagentppage.ui \
    dialog_p.ui \
    reagentgpage.ui
