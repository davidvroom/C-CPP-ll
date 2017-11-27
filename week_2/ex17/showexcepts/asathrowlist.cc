#include "showexcepts.ih"

void ShowExcepts::asAthrowList() const
try
{
	// function code throwing exceptions, e.g. :
	throw 1;
}
catch (int)
{
	throw;
}
catch (string)
{
	throw;
}
catch (...)
{
	throw bad_exception{};
}