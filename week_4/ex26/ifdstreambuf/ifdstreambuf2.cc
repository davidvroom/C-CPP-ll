#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode)
{
    // buffer is initially empty
    setg(0, 0, 0);
}