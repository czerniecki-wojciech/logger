#include "LoggerIOStreamAdapter.h"

void LoggerIOStreamAdapter::log (const char* arg)
{
    std::cout << arg << std::endl;
}

void LoggerIOStreamAdapter::log (const int arg)
{
    std::cout << arg << std::endl;
}

void LoggerIOStreamAdapter::log (const double arg)
{
    std::cout << arg << std::endl;
}
