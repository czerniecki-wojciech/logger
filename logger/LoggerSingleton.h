#ifndef LOGGERSINGLETON_H
#define LOGGERSINGLETON_H

#include <memory>
#include <mutex>
#include <vector>

#include "IAdapter.h"
#include <iostream>

class LoggerSingleton : public IAdapter
{
private:
    static LoggerSingleton* instance;
    std::vector<std::shared_ptr<IAdapter>> adapters;
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

    void log (const char* arg)
    {
        std::cout << arg << std::endl;
    }

    void log (const int arg)
    {
        std::cout << arg << std::endl;
    }

    void log (const double arg)
    {
        std::cout << arg << std::endl;
    }
};

LoggerSingleton* LoggerSingleton::instance = nullptr;

#endif // LOGGERSINGLETON_H
