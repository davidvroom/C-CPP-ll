#include "ifdstreambuf.ih"

int IFdStreambuf::underflow()
{
    int nread = read(d_fd, d_buffer, 100);

    if (nread <= 0)
        return EOF;

    setg(d_buffer, d_buffer, d_buffer + nread);
    return static_cast<unsigned char>(*gptr());
}