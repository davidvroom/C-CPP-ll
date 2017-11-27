#include "showexcepts.ih"

void ShowExcepts::asNoexcept() const
try
{
	(*d_fp)();
}
catch (...)
{
	terminate();
}