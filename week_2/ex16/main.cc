#include "main.ih"

int main()
try
{
    Demo demo1;
    function1();
    cout << "Not executed\n";
}
catch (FatalError fe)
{
    cout << "Program stops\n";
}
