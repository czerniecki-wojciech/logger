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
    LoggerDecorator(std::shared_ptr<IAdapter> logger, const char* prefix = NULL, const char* postfix = NULL);
    LoggerDecorator(IAdapter* logger, const char* prefix = NULL, const char* postfix = NULL);

    virtual ~LoggerDecorator() = default;

    // IAdapter interface
public:
    virtual void log(const char *arg);
    virtual void log(const int arg);
    virtual void log(const double arg);
};
/*! \class LoggerDecorator
 *  \brief Decorates adapters (IAdapter) and class derived from IAdapter.
 */

#endif // LOGGERDECORATOR_H
