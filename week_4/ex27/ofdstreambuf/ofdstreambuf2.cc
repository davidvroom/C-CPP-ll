#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(int fd, Mode mode)
{
    open(fd, mode);
    setp(d_buffer, d_buffer + BUFSIZE);
}
