#include "matrix.ih"

void Matrix::add(Matrix const &rhs)
{
	if (rhs.d_nCols != d_nCols or rhs.d_nRows != d_nRows)
	{
		cerr << "Warning: Matrices have differnt size, "
		     	"so cannot be added!\n";
		exit(1);
	}	 
	size_t matSize = size();
	for (size_t idx = 0; idx != matSize; ++idx)
		d_data[idx] += rhs.d_data[idx];
}