#include "addition.ih"

Operations operator+(Operations const &lhs, Operations const &rhs)
{
    cout << "operatoradd1 calls: ";
    return Operations{ lhs } += rhs;
}

