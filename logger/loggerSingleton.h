#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <mutex>

#include "logger.h"


class LoggerSingleton
{
private:
    static std::shared_ptr<LoggerImp> instance; //holder for logger instance
    static std::once_flag flag; //flag used during initialization

    LoggerSingleton() = default; //default ctor
public:
    LoggerSingleton(const LoggerSingleton&) = delete; //copt-ctro removed
    LoggerSingleton& operator=(const LoggerSingleton&) = delete; //asign operator removed

    static std::shared_ptr<LoggerImp> getInstance()
    //static LoggerImp& getInstance()
    {
        std::call_once(flag, [] {
            instance = std::make_shared<LoggerImp>();
        });
        return instance;
    }
};

#endif // LOGGERSINGLETON_H
