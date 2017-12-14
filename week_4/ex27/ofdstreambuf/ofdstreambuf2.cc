#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode)
{
    setg(0, 0, 0);          // buffer is initially empty
}
