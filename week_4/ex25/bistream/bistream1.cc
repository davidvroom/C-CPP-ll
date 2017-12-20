#include "bistream.ih"

BiStream::BiStream(std::ostream &one, std::ostream &two)
:
	BiStreamBuffer(one, two),
	ostream(this)
{}
