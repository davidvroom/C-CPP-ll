#include "addition.ih"

Operations operator+(Operations &&lhs, Operations const &rhs)
{
    Operations ret(move(lhs));
    ret.Operations::add(rhs);
    return ret;
}
