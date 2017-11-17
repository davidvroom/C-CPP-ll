#include "matrix.ih"

Matrix &Matrix::tr()
{
	if (d_nRows != d_nCols)
	{
		cout << "Error: matrix is not square. Program is terminated.\n";
		exit(1);
	}
	Matrix tmp(d_nRows, d_nCols);
	for (size_t rowIdx = 0; rowIdx != d_nRows; ++rowIdx)
	{
		for (size_t colIdx = 0; colIdx != d_nCols; ++colIdx)
			tmp.d_data[rowIdx * d_nCols + colIdx] = d_data[colIdx * d_nCols + rowIdx];
	}
	swap(tmp);
	return *this;
}
// transposes the current matrix, if it is square