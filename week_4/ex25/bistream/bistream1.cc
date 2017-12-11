#include "bistream.ih"

BiStream::BiStream(std::ofstream one, std::ofstream two)
:
	BiStreamBuffer(),
	ostream(this)
{}
