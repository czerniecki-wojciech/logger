#include <iostream>
#include <memory>
#include "logger/LoggerDecorator.h"
#include "logger/LoggerIOStreamAdapter.h"
#include "logger/LoggerSingleton.h"

using namespace std;

std::shared_ptr<LoggerIOStreamAdapter> logger;
//std::shared_ptr<LoggerDecorator> decorated_logger = std::make_shared<LoggerDecorator>(logger, "prefix1 ", " postfix1");
//std::shared_ptr<LoggerDecorator> decorated_logger2 = std::make_shared<LoggerDecorator>(decorated_logger, "prefix2 ", " postfix2");
//std::shared_ptr<LoggerDecorator> logger_with_prefix = std::make_shared<LoggerDecorator>(logger, "only_prefix: ");

int main()
{
    (*logger).log("Hello logger!");
    (*logger).log(10);
    (*logger).log(9.1);
    (*logger).log(8.3);
/*
    (*decorated_logger).log("decorated text");
    (*decorated_logger).log(10);
    (*decorated_logger).log(9.1);
    (*decorated_logger).log(8.3);

    (*decorated_logger2).log("decorated text");
    (*decorated_logger2).log(10);
    (*decorated_logger2).log(9.1);
    (*decorated_logger2).log(8.3);

    (*logger_with_prefix).log("this log is with prefix only");

    LoggerSingleton::getInstance()->log("singleton");
*/
    cout << "Hello World!" << endl;
    return 0;
}

