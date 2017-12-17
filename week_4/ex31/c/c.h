#ifndef EX31_C_H
#define EX31_C_H

#include <iostream>
#include "../base/base.h"

using namespace std;

class C: public Base
{
    private:
        virtual Base *newCopy() const;
};

inline Base *C::newCopy() const
{
    cout << "clone from C\n";
    return new C{ *this };
}

#endif
