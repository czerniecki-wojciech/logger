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
/*! \class LoggerIOStreamAdapter
 *  \brief Allows LoggerSingleton to write on standart output stream.
 */

#endif // LOGGERIOSTREAMADAPTER_H
