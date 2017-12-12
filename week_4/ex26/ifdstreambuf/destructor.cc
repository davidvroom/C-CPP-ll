#include "ifdstreambuf.h"

IFdStreambuf::~IFdStreambuf()
{
    if (d_mode)
        close(d_fd);
}
