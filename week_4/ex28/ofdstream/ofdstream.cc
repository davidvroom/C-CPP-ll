#include "ofdstream.ih"

OFdStream::OFdStream(int fd)
:
    OFdStreambuf(fd),
    ostream(this)
{}
