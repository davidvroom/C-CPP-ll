#ifndef EX20_OPERATIONS_H
#define EX20_OPERATIONS_H

#include "../binops/binops.h"

class Operations: public Binops
{
// private: only accessible by member functions and friends of the class in
// which it is declared.
    friend class Binops;

    public:
        Operations() = default;

    private:
        void add(Operations const &rhs);
        void sub(Operations const &rhs);
};

inline void Operations::add(Operations const &rhs)
{

}

inline void Operations::sub(Operations const &rhs)
{

}

#endif
