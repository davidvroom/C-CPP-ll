#include "subtraction.ih"

Operations Subtraction::operator-=(Operations const &rhs) &&
{
    cout << "operatorsubis2 calls: ";
    static_cast<Binops &>(*this).binopsSub(rhs);
    return move(static_cast<Operations &>(*this));
}
