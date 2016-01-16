#include <iostream>
#include <memory>

#include "logger/LoggerSingleton.h"

int main()
{
    //setup default console adapter
    std::shared_ptr<IAdapter> consoleLogger = std::make_shared<LoggerIOStreamAdapter>();
    //setup adapter for file log.log
    std::shared_ptr<IAdapter> fileLogger = std::make_shared<LoggerFileAdapter>("log.log");

    //decorate console adapter with prefix and postfix
    std::shared_ptr<IAdapter> consoleLogger_with_prefix_and_postfix =
            std::make_shared<LoggerDecorator>(
                consoleLogger, "Important on console ", "!!!");

    //decorate file adapter with different prefix and without postfix
    std::shared_ptr<IAdapter> fileLogger_with_prefix =
            std::make_shared<LoggerDecorator>(fileLogger, "Important in file: ");

    //add created adapters to LoggerSingleton
    LoggerSingleton::getInstance()->addAdapter(consoleLogger_with_prefix_and_postfix);
    LoggerSingleton::getInstance()->addAdapter(fileLogger_with_prefix);

    //sample of login - both for console output and for file output
    LoggerSingleton::getInstance()->log("singleton123");

    return 0;
}

