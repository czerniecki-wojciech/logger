TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    logger/LoggerIOStreamAdapter.cpp \
    logger/LoggerDecorator.cpp \
    logger/LoggerFileAdapter.cpp \
    logger/LoggerSingleton.cpp

HEADERS += \
    logger/helpers/loggerSingleton.h \
    logger/IAdapter.h \
    logger/LoggerIOStreamAdapter.h \
    logger/LoggerSingleton.h \
    logger/LoggerDecorator.h \
    logger/NoAdaptersError.h \
    logger/LoggerFileAdapter.h

