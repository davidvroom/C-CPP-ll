#include "bistreambuffer.ih"
#include <iostream>

BiStreamBuffer::BiStreamBuffer(std::ofstream &one, std::ofstream &two)
:
	d_one(one),
	d_two(two)
{
	std::cout << "BiStreamBuffer constructed\n";
}
