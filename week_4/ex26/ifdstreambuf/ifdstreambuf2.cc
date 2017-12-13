#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode)
{
    // buffer is initially empty
    setg(d_buffer, d_buffer + 100, d_buffer + 100);
    std::cout << "constructor" << '\n';
}