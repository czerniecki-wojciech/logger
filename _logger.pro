TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    logger/logger.cpp \
    logger/ilogger.cpp

HEADERS += \
    logger/logger.h \
    logger/helpers/loggerSingleton.h \
    logger/ilogger.h

