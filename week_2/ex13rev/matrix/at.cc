// This function offers the strong guarantee. Only if the requested element 
// is an existing element, it is returned and can be modified. 
// Otherwise an exception is thrown to the caller. 

#include "matrix.ih"

double &Matrix::at(size_t rowIdx, size_t colIdx)
{
	if (rowIdx >= d_nRows)
		throw out_of_range{};
	if (colIdx >= d_nCols)
        throw out_of_range{};
	return el(rowIdx, colIdx);
}