#include "addition.ih"

Operations Addition::operator+=(Operations const &rhs) &&
{
    cout << "operatoraddis2 calls: ";
    static_cast<Binops &>(*this).binopsAdd(rhs);
    return move(static_cast<Operations &>(*this));
}
