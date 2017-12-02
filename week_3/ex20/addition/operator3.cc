#include "addition.ih"

Operations &Addition::operator+=(Operations const &rhs) &
{
    Operations tmp = static_cast<Operations &>(*this);
    tmp.Operations::add(rhs)
        .Operations::add(rhs);
    //return *this;
}
