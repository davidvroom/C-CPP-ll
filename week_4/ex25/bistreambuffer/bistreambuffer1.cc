#include "bistreambuffer.ih"

BiStreamBuffer::BiStreamBuffer(std::ostream &one, std::ostream &two)
:
	d_one(one),
	d_two(two)
{}
