#-------------------------------------------------
#
# Project created by QtCreator 2013-06-04T14:33:11
#
#-------------------------------------------------

QT       += core

QT       -= gui

QMAKE_CXXFLAGS += -std=c++11

TARGET = ImageViewer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += include

SOURCES += main.cpp \  
    src/ApplicationController.cpp \
    src/ApplicationControllerBase.cpp \
    src/ApplicationBase.cpp \
    src/ArgumentParserDefault.cpp \
    src/Application.cpp

HEADERS += \
    include/ApplicationController.h \
    include/IApplicationController.h \
    include/ApplicationControllerBase.h \
    include/IApplication.h \
    include/ApplicationBase.h \
    include/ApplicationArguments.h \
    include/IArgumentParser.h \
    include/ArgumentParserDefault.h \
    include/Application.h
