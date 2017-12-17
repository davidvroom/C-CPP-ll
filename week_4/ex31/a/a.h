#ifndef EX31_A_H
#define EX31_A_H

#include <iostream>
#include "../base/base.h"

using namespace std;

class A: public Base
{
private:
    virtual Base *newCopy() const;
};

inline Base *A::newCopy() const
{
    cout << "clone from A\n";
    return new A{ *this };
}

#endif
