#include "addition.ih"

Operations operator+(Operations const &lhs, Operations const &rhs)
{
    Operations ret(lhs);
    ret.add(rhs);
    return ret;
}

