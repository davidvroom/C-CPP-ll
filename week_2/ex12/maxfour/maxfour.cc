#include "maxfour.ih"

Maxfour::Maxfour()
try
{
    if (d_nObj >= 4)
        throw "max. number of objects reached";

    ++d_nObj;

    cout << "Number of objects increased by one (total: "
         << d_nObj
         <<")\n";
}
catch (const char *message)
{
    cout << message << '\n';
}
