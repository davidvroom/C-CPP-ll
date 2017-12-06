#ifndef EX20_SUBTRACTION_H
#define EX20_SUBTRACTION_H

class Operations;

class Subtraction
{
    friend Operations operator-(Operations const &lhs, Operations const &rhs); // 1
    friend Operations operator-(Operations &&lhs, Operations const &rhs);      // 2

public:
    Operations &operator-=(Operations const &rhs) &;                       // 1
    Operations operator-=(Operations const &rhs) &&;                       // 2
};

#endif
