#include "addition.ih"

Operations operator+(Operations const &lhs, Operations const &rhs)
{
    cout << "operatoradd1 calls: ";
    Operations ret(lhs);
    ret += rhs;
    return ret;
}

