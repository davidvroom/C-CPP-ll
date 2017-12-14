#include "ifdstreambuf.ih"

int IFdStreambuf::close()
{
	return ::close(d_fd);
}