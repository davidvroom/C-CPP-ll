#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode),
    d_buffer(new char[d_bufsize])
{
    setg(0, 0, 0);          // buffer is initially empty
}