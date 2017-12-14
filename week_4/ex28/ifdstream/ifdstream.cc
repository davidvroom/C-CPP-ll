#include "ifdstream.ih"

IFdStream::IFdStream(int fd)
:
    IFdStreambuf(fd),
    istream(this)
{}

