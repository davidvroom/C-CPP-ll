#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
    if (d_mode)
    	close();
}
