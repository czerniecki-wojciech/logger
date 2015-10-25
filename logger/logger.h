#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <iostream>
#include <string>

#include "ilogger.h"

class LoggerImp : public ILogger
{
private:
    std::ofstream file;
    std::string file_name = "log.log";
public:
    LoggerImp();
    LoggerImp(const LoggerImp&) = delete;

    virtual ~LoggerImp();

    LoggerImp& operator=(const LoggerImp&) = delete;

    virtual void log (const char* arg);
    virtual void log (const int arg);
    virtual void log (const double arg);
};

#endif // LOGGER_H
