#include "ofdstreambuf.ih"

int OFdStreambuf::close()
{
	return ::close(d_fd);
}
