#ifndef EX20_ADDITION_H
#define EX20_ADDITION_H

class Operations;

class Addition
{
    friend Operations operator+(Operations const &lhs, Operations const &rhs); // 1
    friend Operations operator+(Operations &&lhs, Operations const &rhs);      // 2

    public:
        Operations &operator+=(Operations const &rhs) &;                       // 1
        Operations operator+=(Operations const &rhs) &&;                       // 2
};

#endif
