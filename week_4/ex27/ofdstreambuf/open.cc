#include "ofdstreambuf.ih"

void OFdStreambuf::open(int fd, Mode mode)
{
    if (d_buffer)
    {
        sync();
        if (d_mode == CLOSE_FD)
            close();
    }

    d_fd = fd;
    d_mode = mode;

    if (d_fd != -1)
    {
        delete[] d_buffer;
        d_buffer = new char[BUFSIZE];
    }
}
