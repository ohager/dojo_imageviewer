#-------------------------------------------------
#
# Project created by QtCreator 2013-08-15T13:06:08
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = TestImageViewer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH = ../../include

SOURCES += TestImageViewer.cpp \
    ../../src/ArgumentParserDefault.cpp \
    ../../src/ApplicationControllerBase.cpp \
    ../../src/ApplicationController.cpp \
    ../../src/ApplicationBase.cpp \
    ../../src/Application.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../../include/IArgumentParser.h \
    ../../include/IApplicationController.h \
    ../../include/IApplication.h \
    ../../include/ArgumentParserDefault.h \
    ../../include/ApplicationControllerBase.h \
    ../../include/ApplicationController.h \
    ../../include/ApplicationBase.h \
    ../../include/ApplicationArguments.h \
    ../../include/Application.h
