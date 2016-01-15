#include <iostream>
#include <memory>
#include <logger/loggerdecorator.h>
#include "logger/logger.h"
#include "logger/loggerSingleton.h"

using namespace std;

std::shared_ptr<LoggerImp> logger = std::make_shared<LoggerImp>();
std::shared_ptr<LoggerDecorator> decorated_logger = std::make_shared<LoggerDecorator>(logger, "prefix1 ", " postfix1");
std::shared_ptr<LoggerDecorator> decorated_logger2 = std::make_shared<LoggerDecorator>(decorated_logger, "prefix2 ", " postfix2");
std::shared_ptr<LoggerDecorator> logger_with_prefix = std::make_shared<LoggerDecorator>(logger, "only_prefix: ");

int main()
{
    (*logger).log("Hello logger!");
    (*logger).log(10);
    (*logger).log(9.1);
    (*logger).log(8.3);

    (*decorated_logger).log("decorated text");
    (*decorated_logger).log(10);
    (*decorated_logger).log(9.1);
    (*decorated_logger).log(8.3);

    (*decorated_logger2).log("decorated text");
    (*decorated_logger2).log(10);
    (*decorated_logger2).log(9.1);
    (*decorated_logger2).log(8.3);

    (*logger_with_prefix).log("this log is with prefix only");

    auto singletonLogger = LoggerSingleton::getInstance();
    singletonLogger->log("singleton");

    cout << "Hello World!" << endl;
    return 0;
}

