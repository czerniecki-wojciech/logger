#ifndef LOGGERIOSTREAMADAPTER_H
#define LOGGERIOSTREAMADAPTER_H

#include <iostream>
#include <string>

#include "IAdapter.h"

class LoggerIOStreamAdapter : public IAdapter
{
private:
public:
    LoggerIOStreamAdapter() = default;

    virtual ~LoggerIOStreamAdapter() = default;

    virtual void log (const char* arg);
    virtual void log (const int arg);
    virtual void log (const double arg);
};

#endif // LOGGERIOSTREAMADAPTER_H
