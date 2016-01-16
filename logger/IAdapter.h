#ifndef IADAPTER_H
#define IADAPTER_H

#include <vector>

class IAdapter
{
public:
    virtual ~IAdapter() = default;

    virtual void log (const char* arg) = 0;
    virtual void log (const int arg) = 0;
    virtual void log (const double arg) = 0;
};

#endif // IADAPTER_H
