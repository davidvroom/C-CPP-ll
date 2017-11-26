#include "maxfour.ih"

Maxfour::~Maxfour()
{
    --d_nObj;

    cout << "Number of objects decreased by one (total: "
         << d_nObj
         <<")\n";
}
