// This function offers the basic guarantee. If it cannot make a transpose, 
// the allocated memory is returned. 

#include "matrix.ih"

Matrix Matrix::transpose() const
{
	Matrix ret;
	try
	{
        ret.d_nCols = d_nRows;                  // prepare the return Matrix
	    ret.d_nRows = d_nCols;
	    ret.d_data = new double[size()];

	    transpose(ret.d_data);

	    return ret;
	}
	catch (...)
	{
		delete[] ret.d_data;
		cerr << "Could not make transpose\n";
		throw;
	}
}

