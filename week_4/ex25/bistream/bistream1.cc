#include "bistream.ih"
#include <iostream>
BiStream::BiStream(std::ofstream &one, std::ofstream &two)
:
	ostream(this),
	d_one(one),
	d_two(two)
{
	std::cout << "BiStream constructed\n";
}

