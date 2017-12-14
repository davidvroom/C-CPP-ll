#include "ifdstreambuf.ih"

IFdStreambuf::~IFdStreambuf()
{
	delete[] d_buffer;
    if (d_mode)
    	close();
}
