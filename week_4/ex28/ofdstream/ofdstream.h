#ifndef EX28_OFDSTREAM_H
#define EX28_OFDSTREAM_H

#include <ostream>
#include "../ofdstreambuf/ofdstreambuf.h"

class OFdStream: private OFdStreambuf,  public std::ostream
{
    public:
        explicit OFdStream(int fd);
};

#endif
