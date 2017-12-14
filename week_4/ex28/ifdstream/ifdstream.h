#ifndef EX28_IFDSTREAM_H
#define EX28_IFDSTREAM_H

#include <istream>
#include "../../ex26/ifdstreambuf/ifdstreambuf.h"

class IFdStream: private IFdStreambuf, public std::istream
{
    public:
        explicit IFdStream(int fd);
};

#endif
