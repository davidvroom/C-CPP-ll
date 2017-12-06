#ifndef EX23_OPERATIONS_H
#define EX23_OPERATIONS_H

#include <iostream>
#include "../binops/binops.h"

class Operations: public Binops
{
    friend Binops;

    double d_data = 0;

    public:
        Operations() = default;
        explicit Operations(double initial);
        double value() const;

    private:
        void add(Operations const &rhs);
        void sub(Operations const &rhs);
};

inline void Operations::add(Operations const &rhs)
{
    //std::cout << "addition\n";
    d_data += rhs.d_data;
}

inline void Operations::sub(Operations const &rhs)
{
    std::cout << "subtraction\n";
}

inline double Operations::value() const
{
    return d_data;
}

#endif
