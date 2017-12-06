#ifndef EX20_OPERATIONS_H
#define EX20_OPERATIONS_H

#include <iostream>
#include "../binops/binops.h"

class Operations: public Binops
{
    friend Binops;

    public:
        Operations() = default;

    private:
        void add(Operations const &rhs);
        void sub(Operations const &rhs);
};

inline void Operations::add(Operations const &rhs)
{
    std::cout << "addition\n";
}

inline void Operations::sub(Operations const &rhs)
{
    std::cout << "subtraction\n";
}

#endif
