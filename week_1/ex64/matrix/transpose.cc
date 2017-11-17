#include "matrix.ih"

Matrix Matrix::transpose() const
{
	Matrix tmp(d_nCols, d_nRows);
	for (size_t rowIdx = 0; rowIdx != tmp.d_nRows; ++rowIdx)
	{
		for (size_t colIdx = 0; colIdx != tmp.d_nCols; ++colIdx)
			tmp.d_data[rowIdx * tmp.d_nCols + colIdx] = d_data[colIdx * d_nCols + rowIdx];
	}
	return tmp;
}
// returns a matrix which is the transpose of the current matrix