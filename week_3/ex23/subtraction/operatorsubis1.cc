#include "subtraction.ih"

Operations &Subtraction::operator-=(Operations const &rhs) &
{
    cout << "operatorsubis1 called\n";
    static_cast<Binops &>(*this).binopsSub(rhs);
    return static_cast<Operations &>(*this);
}
