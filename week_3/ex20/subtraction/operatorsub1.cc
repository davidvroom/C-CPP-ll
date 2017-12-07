#include "subtraction.ih"

Operations operator-(Operations const &lhs, Operations const &rhs)
{
    cout << "operatorsub1 calls: ";
    return  Operations{ lhs } -= rhs;
}

