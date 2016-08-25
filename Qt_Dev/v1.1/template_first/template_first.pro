#-------------------------------------------------
#
# Project created by QtCreator 2016-08-18T12:02:22
#
#-------------------------------------------------

QT       += core gui
QT       += core sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = template_first
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logininterface.cpp \
    waitinterface.cpp \
    comandhttptest.cpp \
    reagentplace.cpp \
    dialog_placeoperatepage.cpp \
    reagentgetfromchest.cpp \
    dialog_getoperatepage.cpp \
    returnreagenttochest.cpp \
    dialog_returnreagent.cpp \
    abandonreagent.cpp \
    dialog_abandonreagent.cpp \
    replacereagent.cpp \
    dialog_replacereagent.cpp \
    checkreagent.cpp \
    dialog_checkreagent.cpp \
    limitreagentoperate.cpp

HEADERS  += mainwindow.h \
    logininterface.h \
    waitinterface.h \
    comandhttptest.h \
    reagentplace.h \
    dialog_placeoperatepage.h \
    reagentgetfromchest.h \
    dialog_getoperatepage.h \
    returnreagenttochest.h \
    dialog_returnreagent.h \
    abandonreagent.h \
    dialog_abandonreagent.h \
    replacereagent.h \
    dialog_replacereagent.h \
    checkreagent.h \
    dialog_checkreagent.h \
    limitreagentoperate.h \
    connection.h

FORMS    += mainwindow.ui \
    logininterface.ui \
    waitinterface.ui \
    comandhttptest.ui \
    reagentplace.ui \
    dialog_placeoperatepage.ui \
    reagentgetfromchest.ui \
    dialog_getoperatepage.ui \
    returnreagenttochest.ui \
    dialog_returnreagent.ui \
    abandonreagent.ui \
    dialog_abandonreagent.ui \
    replacereagent.ui \
    dialog_replacereagent.ui \
    checkreagent.ui \
    dialog_checkreagent.ui \
    limitreagentoperate.ui
