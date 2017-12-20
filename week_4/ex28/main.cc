#include "ofdstream/ofdstream.h"
#include "ifdstream/ifdstream.h"

using namespace std;

int main()
{
    IFdStream in{ 0 };		// keyboard
    OFdStream out{ 1 };		// screen

    string str;
    while (true)
    {
        getline(in, str);
        if (not in)
            break;
        out << str << endl;
    }
}
