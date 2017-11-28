#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
try
:
    d_nRows(other.d_nRows),
    d_nCols(other.d_nCols),
    d_data(0)
{
    d_data = new double[size()];
    memcpy(d_data, other.d_data, size() * sizeof(double));
}
catch (...)
{
	cerr << "Memory allocation failed\n"; 
}
