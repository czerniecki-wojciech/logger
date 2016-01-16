#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <mutex>
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
    static LoggerSingleton* instance; //holder for LoggerSingleton instance
    std::vector<std::shared_ptr<IAdapter>> adapters; //adapters used to print important things
    LoggerSingleton() = default;
    ~LoggerSingleton()
    {
        this->removeAllAdapters();
    }
    LoggerSingleton& operator=(LoggerSingleton&) = delete;

public:
    static LoggerSingleton* getInstance()
    {
        if(!instance)
            instance = new LoggerSingleton();

        return instance;
    }

    void addAdapter(std::shared_ptr<IAdapter> adapter)
    {
        adapters.push_back(adapter);
    }

    void removeAllAdapters()
    {
        adapters.clear();
    }

    void destroy_instance()
    {
        instance->removeAllAdapters();
        delete instance;
        instance = nullptr;
    }

    //Logging interface
    void log (const char* arg)
    {
        if(adapters.size())
        {
            std::for_each(adapters.begin(), adapters.end(), [&arg](std::shared_ptr<IAdapter> adapter)
            {
                adapter->log(arg);
            });
        }
        else
        {
            throw NoAdaptersError();
        }
    }

    void log (const int arg)
    {
        if(adapters.size())
        {
            std::for_each(adapters.begin(), adapters.end(), [&arg](std::shared_ptr<IAdapter> adapter)
            {
                adapter->log(arg);
            });
        }
        else
        {
            throw NoAdaptersError();
        }
    }

    void log (const double arg)
    {
        if(adapters.size())
        {
            std::for_each(adapters.begin(), adapters.end(), [&arg](std::shared_ptr<IAdapter> adapter)
            {
                adapter->log(arg);
            });
        }
        else
        {
            throw NoAdaptersError();
        }
    }
};

LoggerSingleton* LoggerSingleton::instance = nullptr; //initialization of instance with nullptr on startup

#endif // LOGGERSINGLETON_H
