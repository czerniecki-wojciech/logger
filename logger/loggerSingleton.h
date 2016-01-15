#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <mutex>

#include "logger.h"
#include <iostream>


class LoggerSingleton
{
public:
    static LoggerImp* getInstance()
    {
        if(!instance)
            instance = new LoggerImp();

        return instance;
    }

    static
    void destroy_instance()
    {
        delete instance;
        instance = nullptr;
    }

private:
    static LoggerImp* instance;
};

LoggerImp* LoggerSingleton::instance = nullptr;

#endif // LOGGERSINGLETON_H
