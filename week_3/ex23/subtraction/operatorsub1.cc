#include "subtraction.ih"

Operations operator-(Operations const &lhs, Operations const &rhs)
{
    cout << "operatorsub1 called\n";
    return  Operations{ lhs } -= rhs;
}

