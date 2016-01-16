#include "LoggerSingleton.h"

/*!
   *  Holder for LoggerSingleton instance.
   */
LoggerSingleton* LoggerSingleton::instance = nullptr;

/*!
   *  Destructor of LoggerSingleton. Additionally it will remove all added adapters.
   */
LoggerSingleton::~LoggerSingleton()
{
    this->removeAllAdapters();
}

/*!
   *  A function to get instance of LoggerSingleton.
   */
LoggerSingleton* LoggerSingleton::getInstance()
{
    if(!instance)
        instance = new LoggerSingleton();

    return instance;
}

/*!
   *  A function for add new adapter (derived from IAdapter) to LoggerSingleton.
   */
void LoggerSingleton::addAdapter(std::shared_ptr<IAdapter> adapter)
{
    adapters.push_back(adapter);
}

/*!
   *  A function for removing all added adapters.
   */
void LoggerSingleton::removeAllAdapters()
{
    adapters.clear();
}

/*!
   *  A function called by destructor or by user in order to remove all adapters.
   */
void LoggerSingleton::destroy_instance()
{
    instance->removeAllAdapters();
    delete instance;
    instance = nullptr;
}

/*!
   *  A function for log strings.
   */
void LoggerSingleton::log (const char* arg)
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
/*!
   *  A function for log integer values.
   */
void LoggerSingleton::log (const int arg)
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
/*!
   *  A function for log multi precision values.
   */
void LoggerSingleton::log (const double arg)
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
