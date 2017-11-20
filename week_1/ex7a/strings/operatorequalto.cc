#include "strings.ih"

bool operator==(Strings const &lhs, Strings const &rhs)
{
	if (lhs.d_size != rhs.d_size) // check size of array of Strings
		return false;

	for (size_t idx = 0; idx != lhs.d_size; ++idx)
	{							  // compare string objects
		if (*lhs.d_str[idx] != *rhs.d_str[idx])
			return false;
	}
	return true;
}
