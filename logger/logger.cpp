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

LoggerImp& operator<< (LoggerImp &logger, std::ostream& (*f)(std::ostream &)) {
  f(std::cout);
  return logger;
}

LoggerImp& operator<< (LoggerImp &logger, std::ostream& (*f)(std::ios &)) {
  f(std::cout);
  return logger;
}

LoggerImp& operator<< (LoggerImp &logger, std::ostream& (*f)(std::ios_base &)) {
  f(std::cout);
  return logger;
}
