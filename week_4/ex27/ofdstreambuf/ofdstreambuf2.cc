#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode),
    d_buffer(new char[d_bufsize])
{
    setp(d_buffer, d_buffer + d_bufsize);
}
