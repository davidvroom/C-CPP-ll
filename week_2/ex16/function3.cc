#include "main.ih"

void function3()
try
{
    Demo demo4;
    throw "Exception at deepest level is thrown";
    cout << "Not executed\n";
}
catch (char const *message)
{
    cout << message << '\n';
    throw;
}

