#include "ofdstream/ofdstream.h"
#include "ifdstream/ifdstream.h"

int main()
{
    IFdStream in{ 0 };		// keyboard
    OFdStream out{ 1 };		// screen

    std::string str;
    while (getline(in, str))
        out << str << std::endl;
}
