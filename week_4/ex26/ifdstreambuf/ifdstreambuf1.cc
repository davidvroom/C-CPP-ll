#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(Mode mode)
:
    d_fd(-1),		// set later by open
    d_mode(mode),
    d_buffer(new char[d_bufsize])
{}