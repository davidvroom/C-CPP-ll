#include "matrix.ih"

void Matrix::print() const
{
	cout << '\n'; 
	for (size_t rowIdx = 0; rowIdx != d_nRows; ++rowIdx)
	{
		double const *dptr = row(rowIdx + 1);
		for (size_t colIdx = 0; colIdx != d_nCols; ++ colIdx)
		{
			cout << *(dptr + colIdx) << '\t';
		} 
		cout << '\n';
	}
	cout << '\n';
}