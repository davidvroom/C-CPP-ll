#include "showexcepts.ih"

void ShowExcepts::throwlist() const throw (int, string)
{
	// function code throwing exceptions
	throw 1.5;
}