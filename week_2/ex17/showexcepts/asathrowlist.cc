#include "showexcepts.ih"

void ShowExcepts::asAthrowList() const
try
{
	// function code throwing exceptions, e.g. :
	(*d_fp)();
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