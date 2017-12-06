#include "addition.ih"

Operations &Addition::operator+=(Operations const &rhs) &
{
    cout << "operatoraddis1 calls: ";
    static_cast<Binops &>(*this).binopsAdd(rhs);
    return static_cast<Operations &>(*this);
}
