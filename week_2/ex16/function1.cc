#include "main.ih"

void function1()
try
{
    Demo demo2;
    function2();
    cout << "Not executed\n";
}
catch (...)
{
    throw;
}
