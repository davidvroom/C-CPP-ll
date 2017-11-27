#include "maxfour.ih"

Maxfour::Maxfour()
try
{
    if (s_nObj >= 11)
        throw "max. number of objects reached";

    ++s_nObj;

    cout << "Number of objects increased by one (total: "
         << s_nObj
         <<")\n";
}
catch (const char *message)
{
    cout << message << '\n';
}
