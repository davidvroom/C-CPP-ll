#include <iostream>
#include "ofdstream/ofdstream.h"
#include "ifdstream/ifdstream.h"

int main()
{
    IFdStream in{ 0 };
    OFdStream out{ 1 };

    while (true)
    {
        int ch;
        in >> ch;
        out << ch;
    }
}