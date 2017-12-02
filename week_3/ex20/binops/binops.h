#ifndef EX20_BINOPS_H
#define EX20_BINOPS_H

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"
#include "../operations/operations.h"

class Binops: public Addition, public Subtraction
{
    friend class Addition;
};

#endif
