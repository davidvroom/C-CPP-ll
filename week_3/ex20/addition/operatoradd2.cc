#include "addition.ih"

Operations operator+(Operations &&lhs, Operations const &rhs)
{
    cout << "operatoradd2 calls: ";
    Operations ret(move(lhs));
    ret += rhs;
    return ret;
}
