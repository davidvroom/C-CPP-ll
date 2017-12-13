#include "bistream.ih"
#include <iostream>
BiStream::BiStream(std::ofstream &one, std::ofstream &two)
:
	BiStreamBuffer(one, two),
	ostream(this)
{
	std::cout << "BiStream constructed\n";
}