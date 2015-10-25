#include <iostream>

#include "logger/logger.h"

using namespace std;

LoggerImp logger;

int main()
{
    logger << "Hello logger!";
    cout << "Hello World!" << endl;
    return 0;
}

