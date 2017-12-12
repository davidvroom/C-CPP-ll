#ifndef INCLUDED_BISTREAM_
#define INCLUDED_BISTREAM_

#include <fstream>
#include "../bistreambuffer/bistreambuffer.h"

class BiStream: private BiStreamBuffer, public std::ostream
{
	friend BiStream &operator<<(BiStream &bistream, char const *txt);

	std::ofstream &d_one;
	std::ofstream &d_two;

    public:
        BiStream(std::ofstream &one, std::ofstream &two);
};
   

#endif
