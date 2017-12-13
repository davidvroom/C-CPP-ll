#include "ifdstreambuf.ih"

int IFdStreambuf::underflow()
{
    std::cout << "\nUNDERFLOW()" << '\n';
    // when success number of bytes read is returned
    // 0 indicates end of file
    // -1 is returned when error
    if (read(d_fd, d_buffer, 1) <= 0)
        return EOF;

    setg(d_buffer, d_buffer, d_buffer + 100);
    return static_cast<unsigned char>(*gptr());
}