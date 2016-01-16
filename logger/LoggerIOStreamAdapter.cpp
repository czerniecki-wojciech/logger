#include "LoggerIOStreamAdapter.h"

/*!
   *  A function for log strings.
   */
void LoggerIOStreamAdapter::log (const char* arg)
{
    std::cout << arg << std::endl;
}

/*!
   *  A function for log integer values.
   */
void LoggerIOStreamAdapter::log (const int arg)
{
    std::cout << arg << std::endl;
}

/*!
   *  A function for log multi precision values.
   */
void LoggerIOStreamAdapter::log (const double arg)
{
    std::cout << arg << std::endl;
}
