#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <vector>
#include <algorithm>

#include "NoAdaptersError.h"
#include "IAdapter.h"
#include "logger/LoggerDecorator.h"
#include "logger/LoggerIOStreamAdapter.h"
#include "logger/LoggerFileAdapter.h"

class LoggerSingleton : public IAdapter
{
private:
    static LoggerSingleton* instance;
    std::vector<std::shared_ptr<IAdapter>> adapters;

    LoggerSingleton() = default;
    ~LoggerSingleton();

    LoggerSingleton& operator=(LoggerSingleton&) = delete;

public:
    static LoggerSingleton* getInstance();

    void addAdapter(std::shared_ptr<IAdapter> adapter);
    void removeAllAdapters();
    void destroy_instance();

    //Logging interface
    void log (const char* arg);
    void log (const int arg);
    void log (const double arg);
};
/*! \class LoggerSingleton
 *  \brief Main class of whole module, it is based on singleton pattern.
 */

#endif // LOGGERSINGLETON_H
