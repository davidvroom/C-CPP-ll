#include "matrix.ih"

Matrix::Matrix(Matrix &&tmp)
:
	d_nRows(tmp.d_nRows),
	d_nCols(tmp.d_nCols),
	d_nElements(tmp.d_nElements),
	d_data(tmp.d_data)
{
    tmp.d_data = 0;
}
// move constructor