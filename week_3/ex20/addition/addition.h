#ifndef EX20_ADDITION_H
#define EX20_ADDITION_H

#include "../operations/operations.h"

class Addition
{
    friend Operations operator+(Operations const &lhs, Operations const &rhs); // 1
    friend Operations operator+(Operations &&lhs, Operations const &rhs);      // 2

    protected:
        Operations &operator+=(Operations const &rhs) &;                       // 3
        Operations operator+=(Operations const &rhs) &&;                       // 4
};

#endif
