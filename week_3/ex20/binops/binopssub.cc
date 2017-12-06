#include "binops.ih"

void Binops::binopsSub(Operations const &rhs)
{
    static_cast<Operations &>(*this).sub(rhs);
}
