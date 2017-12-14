#include "ofdstreambuf.ih"

void OFdStreambuf::open(int fd, Mode mode)
{
	d_fd = fd;
	d_mode = mode;
}
