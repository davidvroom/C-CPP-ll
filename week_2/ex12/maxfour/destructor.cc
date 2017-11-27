#include "maxfour.ih"

Maxfour::~Maxfour()
{
    --s_nObj;

    cout << "Number of objects decreased by one (total: "
         << s_nObj
         <<")\n";
}
