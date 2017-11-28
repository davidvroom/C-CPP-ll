#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
try
:
    d_nRows(nRows),
    d_nCols(nCols),
    d_data(0)
{
	d_data = new double[size()]();
}
catch (...)
{
	cerr << "Memory allocation failed\n"; 
}
