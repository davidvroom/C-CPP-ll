#include "ofdstream/ofdstream.h"
#include "ifdstream/ifdstream.h"

int main()
{
    IFdStream in{ 0 };
    OFdStream out{ 1 };

    std::string str;
    while (getline(in, str))
        out << str << std::endl;
}
