#include <iostream>
#include "demo.h"

using namespace std;

Demo factory()
{
    Demo ret;
    return ret;
}

int main()
{
    Demo d1;
    Demo d2{ factory() };   // Copy elision is used
    Demo d3{ move(d2) };    // Move constructor is used
    d2 = d3;                // Copy assignment operator is used
    d2 = factory();         // Move assignment operator is used
}
