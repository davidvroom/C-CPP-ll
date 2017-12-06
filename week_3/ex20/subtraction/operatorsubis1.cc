#include "subtraction.ih"

Operations &Subtraction::operator-=(Operations const &rhs) &
{
    cout << "operatorsubis1 calls: ";
    static_cast<Binops &>(*this).binopsSub(rhs);
    return static_cast<Operations &>(*this);
}
