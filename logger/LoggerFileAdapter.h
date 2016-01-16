#ifndef LOGGERFILEADAPTER_H
#define LOGGERFILEADAPTER_H

#include <fstream>
#include <string>

#include "IAdapter.h"

class LoggerFileAdapter : public IAdapter
{
private:
    std::fstream file;
public:
    LoggerFileAdapter() = delete;
    LoggerFileAdapter(const char* filename);

    virtual ~LoggerFileAdapter();

    virtual void log (const char* arg);
    virtual void log (const int arg);
    virtual void log (const double arg);
};

/*! \class LoggerFileAdapter LoggerFileAdapter.h "logger/LoggerFileAdapter.h"
 *  \brief This is adapter for fstream.
 *
 * This adapter allows to save important data to the file.
 */

#endif // LOGGERFILEADAPTER_H
