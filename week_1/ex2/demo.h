#ifndef EX63_DEMO_H
#define EX63_DEMO_H

#include <iostream>

using namespace std;

class Demo
{
    public:
        Demo() = default;

        Demo(Demo const &outer)
        {
            cout << "Copy constructor called" << '\n';
        }

        Demo(Demo &&tmp)
        {
            cout << "Move constructor called" << '\n';
        }

        ~Demo() = default;

        Demo &operator=(Demo const &outer)
        {
            cout << "Copy assignment operator called" << '\n';
            return *this;
        }

        Demo &operator=(Demo &&tmp)
        {
            cout << "Move assignment operator called" << '\n';
            return *this;
        }
};

#endif
