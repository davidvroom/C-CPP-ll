#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
:	
	d_nRows(other.d_nRows),
	d_nCols(other.d_nCols),
	d_nElements(other.d_nElements),
	d_data(new double[d_nElements])
{
	for (size_t idx = 0; idx != d_nElements; ++idx)
		d_data[idx] = other.d_data[idx];
}
// copy constructor