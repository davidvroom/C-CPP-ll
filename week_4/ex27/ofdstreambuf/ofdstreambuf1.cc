#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(Mode mode)
:
    d_fd(-1),		// set later by open
    d_mode(mode)
{}