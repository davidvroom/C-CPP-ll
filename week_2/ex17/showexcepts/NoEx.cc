#include "showexcepts.ih"

void ShowExcepts::NoEx() const noexcept
{
	(*d_fp)();
}