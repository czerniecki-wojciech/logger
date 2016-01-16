#ifndef NOADAPTERSERROR_H
#define NOADAPTERSERROR_H

#include <exception>
#include <stdexcept>
#include <sstream>

class NoAdaptersError : public std::runtime_error
{
public:
    NoAdaptersError()
    : std::runtime_error("No adapters was added to LoggerSingleton before first use")
    {}

    virtual const char* what() const throw()
    {
        std::ostringstream cnvt("");
        cnvt << std::runtime_error::what();
        return cnvt.str().c_str();
    }
};
/*! \class NoAdaptersError
 *  \brief Defines error, which is throwed when LoggerSingleton has no added adapter (derived from IAdapter) and one of methods of IAdapter is called on it.
 */

#endif // NOADAPTERSERROR_H
