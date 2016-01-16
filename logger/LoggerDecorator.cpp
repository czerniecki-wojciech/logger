#include "LoggerDecorator.h"

/*!
   *  A function for log strings.
   */
void LoggerDecorator::log(const char *arg)
{
    logger->log((prefix + std::string(arg) + postfix).c_str());
}

/*!
   *  A function for log integer values.
   */
void LoggerDecorator::log(const int arg)
{
    logger->log((prefix + std::to_string(arg) + postfix).c_str());
}

/*!
   *  A function for log multi precision values.
   */
void LoggerDecorator::log(const double arg)
{
    logger->log((prefix + std::to_string(arg) + postfix).c_str());
}

/*!
   *  Constructor which decorated adapters (derived from IAdapter) or another decorators (LoggerDecorator).
   */
LoggerDecorator::LoggerDecorator(std::shared_ptr<IAdapter> logger, const char* prefix, const char* postfix)
    : logger(logger)
{
    if(prefix) {
        this->prefix = prefix;
    } else {
        this->prefix = "";
    }
    if(postfix) {
        this->postfix = postfix;
    } else {
        this->postfix = "";
    }
}

/*!
   *  Constructor which decorated LoggerSingleton in orer to create dedicated logger streams.
   */
LoggerDecorator::LoggerDecorator(IAdapter* logger, const char* prefix, const char* postfix)
    : logger(logger)
{
    if(prefix) {
        this->prefix = prefix;
    } else {
        this->prefix = "";
    }
    if(postfix) {
        this->postfix = postfix;
    } else {
        this->postfix = "";
    }
}
