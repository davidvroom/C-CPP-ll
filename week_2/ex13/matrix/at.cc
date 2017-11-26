#include "matrix.ih"

double &Matrix::at(size_t rowIdx, size_t colIdx)
try
{
	if (rowIdx >= d_nRows)
		throw "Row index exceeded";
	if (colIdx >= d_nCols)
		throw "Column index exceeded";
	return el(rowIdx, colIdx);
}
catch (char const *message)
{
	cerr << "Exception: " << message << '\n';
}