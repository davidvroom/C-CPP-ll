#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
:
	d_nRows(nRows),
	d_nCols(nCols),
	d_nElements(nRows * nCols),
	d_data(new double[d_nElements]())
{}
