#include "loggerdecorator.h"

void LoggerDecorator::log(const char *arg)
{
    logger->log((prefix + std::string(arg) + postfix).c_str());
}

void LoggerDecorator::log(const int arg)
{
    logger->log((prefix + std::to_string(arg) + postfix).c_str());
}

void LoggerDecorator::log(const double arg)
{
    logger->log((prefix + std::to_string(arg) + postfix).c_str());
}
