#include "matrix.ih"

double *Matrix::safeRow(size_t idx) const
{
	return &d_data[(idx - 1) * d_nCols];
}
// returns pointer to first element of row idx