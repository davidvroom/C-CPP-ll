#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(Mode mode)
:
    d_fd(STDIN_FILENO),		// ?
    d_mode(mode)
{}