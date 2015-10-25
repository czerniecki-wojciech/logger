#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <iostream>
#include <string>

class LoggerImp
{
private:
    std::ofstream file;
    std::string file_name = "log.log";
public:
    LoggerImp();
    LoggerImp(const LoggerImp&) = delete;

    ~LoggerImp();

    LoggerImp& operator=(const LoggerImp&) = delete;

    template<typename T>
    LoggerImp& operator<< (const T &arg)
    {
        std::cout << arg;

        return *this;
    }
};

#endif // LOGGER_H
