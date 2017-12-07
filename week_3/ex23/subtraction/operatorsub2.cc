#include "subtraction.ih"

Operations operator-(Operations &&lhs, Operations const &rhs)
{
    cout << "operatorsub2 called\n";
    Operations ret(move(lhs));
    ret -= rhs;
    return ret;
}
