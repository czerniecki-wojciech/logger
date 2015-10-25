#include <iostream>

#include "logger/logger.h"

using namespace std;

LoggerImp logger;

int main()
{
    logger.log("Hello logger!");
    logger.log(10);
    logger.log(9.1);
    logger.log(8.3);
    cout << "Hello World!" << endl;
    return 0;
}

