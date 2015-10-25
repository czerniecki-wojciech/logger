#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <mutex>


class LoggerSingleton
{
private:
    static std::unique_ptr<Logger> instance_holder; //holder for logger instance
    static std::once_flag flag; //flag used during initialization

    LoggerSingleton() = default; //default ctor
public:
    LoggerSingleton(const LoggerSingleton&) = delete; //copt-ctro removed
    LoggerSingleton& operator=(const LoggerSingleton&) = delete; //asign operator removed

    static Logger& instance()
    {
        std::call_once(flag, [] {
            instance_holder.reset(new Logger());
        });
        return *instance_holder;
    }
};

#endif // LOGGERSINGLETON_H
