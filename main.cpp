#include <iostream>
#include <memory>
#include <logger/loggerdecorator.h>
#include "logger/logger.h"

using namespace std;

std::shared_ptr<LoggerImp> logger = std::make_shared<LoggerImp>();
std::shared_ptr<LoggerDecorator> decorated_logger = std::make_shared<LoggerDecorator>(logger, "prefix ", " postfix");

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
    cout << "Hello World!" << endl;
    return 0;
}

