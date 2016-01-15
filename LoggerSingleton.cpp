#include "logger/loggerSingleton.h"

std::shared_ptr<LoggerImp> LoggerSingleton::instance;
std::once_flag LoggerSingleton::flag;
