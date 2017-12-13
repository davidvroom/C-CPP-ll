#include "ifdstreambuf.ih"

IFdStreambuf::~IFdStreambuf()
{
    if (d_mode)
    	close();
}
