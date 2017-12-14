#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
	sync();
	delete[] d_buffer;
	
    if (d_mode)
    	close();
}
