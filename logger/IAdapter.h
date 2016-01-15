#ifndef ILOGGER_H
#define ILOGGER_H

//interface for logger and its decorators
#include <vector>

class IAdapter
{
public:
    virtual ~IAdapter() = default;

    virtual void log (const char* arg) = 0;
    virtual void log (const int arg) = 0;
    virtual void log (const double arg) = 0;
};

#endif // ILOGGER_H
