#include "addition.ih"

Operations Addition::operator+=(Operations const &rhs) &&
{
    Operations tmp{ *this };
    tmp.add(rhs);
    return move(static_cast<Operations &>(*this));
}
