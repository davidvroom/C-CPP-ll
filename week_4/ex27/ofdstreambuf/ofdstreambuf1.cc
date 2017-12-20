#include "ofdstreambuf.ih"

OFdStreambuf::OFdStreambuf(Mode mode)
{
    open(-1, mode);
}