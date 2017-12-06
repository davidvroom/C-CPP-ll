#include "subtraction.ih"

Operations operator-(Operations &&lhs, Operations const &rhs)
{
    cout << "operatorsub2 calls: ";
    Operations ret(move(lhs));
    ret -= rhs;
    return ret;
}
