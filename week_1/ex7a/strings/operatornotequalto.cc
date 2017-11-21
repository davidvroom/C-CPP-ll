#include "strings.ih"

bool operator!=(Strings const &lhs, Strings const &rhs)
{
	if (!(lhs == rhs))
		return true;

	return false;
}
