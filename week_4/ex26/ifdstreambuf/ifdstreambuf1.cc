#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(Mode mode)
{
    open(-1, mode);
}
