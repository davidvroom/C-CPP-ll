#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode)
{
    setg(0, 0, 0);          // buffer is initially empty
}