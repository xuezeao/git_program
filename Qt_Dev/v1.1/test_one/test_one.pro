#-------------------------------------------------
#
# Project created by QtCreator 2016-11-07T10:01:32
#
#-------------------------------------------------

QT       += core gui
QT       += core sql

QT       += network
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_one
TEMPLATE = app


SOURCES += main.cpp \
    checkboxdelegate.cpp \
    execut_window.cpp \
    global_Vailable.cpp \
    http_gandp.cpp \
    mainui.cpp \
    myqheaderview.cpp \
    operatewindow.cpp \
    uart4stm.cpp \
    pbtdelegate.cpp \
    agentiainfochange.cpp \
    sheet_operatepage.cpp \
    returnpage.cpp \
    showallinfo.cpp \
    enterpage.cpp \
    readstminfo.cpp

HEADERS  += \
    checkboxdelegate.h \
    execut_window.h \
    global_Vailable.h \
    http_gandp.h \
    mainui.h \
    myqheaderview.h \
    operatewindow.h \
    Sql_Setting.h \
    uart4stm.h \
    pbtdelegate.h \
    agentiainfochange.h \
    sheet_operatepage.h \
    returnpage.h \
    showallinfo.h \
    enterpage.h \
    readstminfo.h

FORMS    += \
    execut_window.ui \
    mainui.ui \
    operatewindow.ui \
    agentiainfochange.ui \
    sheet_operatepage.ui \
    returnpage.ui \
    showallinfo.ui \
    enterpage.ui

RESOURCES += \
    image.qrc