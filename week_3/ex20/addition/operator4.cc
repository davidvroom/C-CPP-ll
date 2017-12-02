#include "addition.ih"

Operations Addition::operator+=(Operations const &rhs) &&
{
    add(rhs);
    return move(*this);
}
