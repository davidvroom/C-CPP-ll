#include "ifdstreambuf.ih"

void IFdStreambuf::open(int fd, Mode mode)
{
	d_fd = fd;
	d_mode = mode;
}