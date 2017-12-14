#include "ifdstreambuf.ih"

int IFdStreambuf::underflow()
{
    if (gptr() < egptr())
        return *gptr();

    int nRead = read(d_fd, d_buffer, 100);

    if (nRead <= 0)
        return EOF;

    setg(d_buffer, d_buffer, d_buffer + nRead);
    return static_cast<unsigned char>(*gptr());
}
