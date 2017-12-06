#ifndef EX20_BINOPS_H
#define EX20_BINOPS_H

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"

class Binops: public Addition, public Subtraction
{
    friend class Addition;
    friend class Subtraction;

    private:
        void binopsAdd(Operations const &rhs);
        void binopsSub(Operations const &rhs);
};

#endif
