#include "ifdstreambuf.ih"

void IFdStreambuf::open(int fd, Mode mode)
{
	d_fd = fd;
	d_mode = mode;
	//cout << "open\n";
	//setg(0, 0, 0);
}