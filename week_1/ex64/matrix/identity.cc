#include "matrix.ih"

Matrix Matrix::identity(size_t dim)
{
	Matrix iMatrix(dim, dim);					// initialize matrix with zeros
	for (size_t idx = 0; idx != dim; ++idx)		// set diagonal elements to 1
		iMatrix.d_data[idx * iMatrix.d_nCols + idx] = 1;

	return iMatrix;
}
// returns identity matrix of dimension dim