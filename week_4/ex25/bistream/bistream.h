#ifndef INCLUDED_BISTREAM_
#define INCLUDED_BISTREAM_

#include <fstream>
#include "../bistreambuffer/bistreambuffer.h"

class BiStream: private BiStreamBuffer, public std::ostream
{
    public:
        BiStream(std::ofstream one, std::ofstream two);		// o or of?

    private:
};
        
#endif
