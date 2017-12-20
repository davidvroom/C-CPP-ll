#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
{
    open(fd, mode);
    setg(0, 0, 0);          // buffer is initially empty
}
