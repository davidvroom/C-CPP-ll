#include "addition.ih"

Operations &Addition::operator+=(Operations const &rhs) &
{
    //Operations tmp = static_cast<Operations &>(*this);
    add(rhs);
        //.Operations::add(rhs);
    return static_cast<Operations &>(*this);
}
