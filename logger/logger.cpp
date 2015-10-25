#include "logger.h"

LoggerImp::LoggerImp()
{
    std::cout << "Logger is starting" << std::endl;
    file.open(file_name);
}

LoggerImp::~LoggerImp()
{
    file.close();
    std::cout << "End of logger session" << std::endl;
}

void LoggerImp::log (const char* arg)
{
    std::cout << arg << std::endl;
}

void LoggerImp::log (const int arg)
{
    std::cout << arg << std::endl;
}

void LoggerImp::log (const double arg)
{
    std::cout << arg << std::endl;
}
