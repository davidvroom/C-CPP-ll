#include "strings.ih"

Strings &Strings::operator=(Strings const &outerStrings)
{
    Strings tmp{ outerStrings };
    return *this = std::move(tmp);
}
