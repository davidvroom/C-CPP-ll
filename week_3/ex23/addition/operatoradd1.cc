#include "addition.ih"

Operations operator+(Operations const &lhs, Operations const &rhs)
{
    cout << "operatoradd1 called\n";
    return Operations{ lhs } += rhs;
}

