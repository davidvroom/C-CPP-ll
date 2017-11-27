#include "showexcepts.ih"

void ShowExcepts::asAthrowList() const
try
{
	// function code throwing exceptions
	throw 1.5;
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