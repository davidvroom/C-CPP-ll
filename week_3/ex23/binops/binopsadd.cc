#include "binops.ih"

void Binops::binopsAdd(Operations const &rhs)
{
    static_cast<Operations &>(*this).add(rhs);
}