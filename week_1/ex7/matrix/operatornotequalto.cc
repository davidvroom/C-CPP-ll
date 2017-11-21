#include "matrix.ih"

bool operator!=(Matrix const &lhs, Matrix const &rhs)
{
	if (!(lhs == rhs))
		return true;

	return false;
}
