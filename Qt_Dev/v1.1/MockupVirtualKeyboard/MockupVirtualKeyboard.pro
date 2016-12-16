#-------------------------------------------------
#
# Project created by QtCreator 2013-04-04T23:11:38
#
#-------------------------------------------------

QT       += qml quick gui-private widgets

CONFIG += plugin

TARGET = MockupVirtualKeyboard
TEMPLATE = lib

DEFINES += MOCKUPVIRTUALKEYBOARD_LIBRARY

win32 {
    DESTDIR = $$PWD/../build-IPTest/platforminputcontexts
    OBJECTS_DIR = $$DESTDIR/obj
    MOC_DIR = $$DESTDIR/moc
}


SOURCES += mockupplatforminputcontextplugin.cpp \
    mockupinputcontext.cpp \
    mockupkeyeventdispatcher.cpp \
    pinyininputmethod.cpp

HEADERS += mockupplatforminputcontextplugin.h\
        mockupvirtualkeyboard_global.h \
    mockupinputcontext.h \
    mockupkeyeventdispatcher.h \
    pinyininputmethod.h

INSTALLS += target

OTHER_FILES += \
    InputPanel.qml \
    KeyModel.qml \
    KeyButton.qml

RESOURCES += \
    res/res.qrc \
    qml/qml.qrc

