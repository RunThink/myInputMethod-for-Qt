#-------------------------------------------------
#
# Project created by QtCreator 2017-12-31T14:55:23
#
#-------------------------------------------------

QT       += gui gui-private core-private

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myinputmethod
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/platforminputcontexts

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    platforminputcontext.cpp \
    plugin.cpp \
    enkeyboard.cpp

HEADERS += \
    platforminputcontext.h \
    plugin.h \
    enkeyboard.h

DISTFILES += myinputmethod.json 

unix {
    target.path = /usr/lib
    INSTALLS += target
}

PLUGIN_TYPE = platforminputcontexts
PLUGIN_EXTENDS = -
PLUGIN_CLASS_NAME = myInputMethod

FORMS += \
    enkeyboard.ui
