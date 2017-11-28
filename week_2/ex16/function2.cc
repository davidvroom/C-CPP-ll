#include "main.ih"

void function2()
try
{
    Demo demo3;
    function3();
    cout << "Not executed\n";
}
catch (...)
{
    throw;
}
