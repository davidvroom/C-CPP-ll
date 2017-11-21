#include "matrix.ih"

bool operator==(Matrix const &lhs, Matrix const &rhs)
{
	if (lhs.d_nCols != rhs.d_nCols or lhs.d_nRows != rhs.d_nRows)
		return false;

	for (size_t idx = lhs.size(); idx--; )
	{
		if (lhs.d_data[idx] != rhs.d_data[idx])
			return false;
	}
	return true;
}