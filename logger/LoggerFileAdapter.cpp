#include "LoggerFileAdapter.h"

/*!
   *  A function for log strings.
   */
void LoggerFileAdapter::log (const char* arg)
{
    file << arg << std::endl;
}

/*!
   *  A function for log integer values.
   */
void LoggerFileAdapter::log (const int arg)
{
    file << arg << std::endl;
}

/*!
   *  A function for log multi precision values.
   */
void LoggerFileAdapter::log (const double arg)
{
    file << arg << std::endl;
}

/*!
   *  Constructor of LoggerFileAdapter, opens filename file stream on create.
   */
LoggerFileAdapter::LoggerFileAdapter(const char* filename)
{
    file.open(filename);
}

/*!
   *  Destructor of LoggerFileAdapter, closes file stream on destroy.
   */
LoggerFileAdapter::~LoggerFileAdapter()
{
    file.close();
}
