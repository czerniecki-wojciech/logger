#include "IAdapter.h"
#include <memory>
#include <string>

#ifndef LOGGERDECORATOR_H
#define LOGGERDECORATOR_H

class LoggerDecorator : public IAdapter
{
private:
    std::shared_ptr<IAdapter> logger;
    std::string prefix;
    std::string postfix;

public:
    LoggerDecorator() = delete;
    LoggerDecorator(std::shared_ptr<IAdapter> logger, const char* prefix = NULL, const char* postfix = NULL)
        : logger(logger)
    {
        if(prefix) {
            this->prefix = prefix;
        } else {
            this->prefix = "";
        }
        if(postfix) {
            this->postfix = postfix;
        } else {
            this->postfix = "";
        }
    }

    virtual ~LoggerDecorator() = default;

    // ILogger interface
public:
    virtual void log(const char *arg);
    virtual void log(const int arg);
    virtual void log(const double arg);
};

#endif // LOGGERDECORATOR_H
