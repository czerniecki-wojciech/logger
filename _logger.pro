TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    logger/LoggerIOStreamAdapter.cpp \
    logger/LoggerDecorator.cpp

HEADERS += \
    logger/helpers/loggerSingleton.h \
    logger/IAdapter.h \
    logger/LoggerIOStreamAdapter.h \
    logger/LoggerSingleton.h \
    logger/LoggerDecorator.h

