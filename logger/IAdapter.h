#ifndef IADAPTER_H
#define IADAPTER_H

class IAdapter
{
public:
    virtual ~IAdapter() = default;

    virtual void log (const char* arg) = 0;
    virtual void log (const int arg) = 0;
    virtual void log (const double arg) = 0;
};
/*! \class IAdapter
 *  \brief Defines interface for LoggerSingleton
 */

#endif // IADAPTER_H
