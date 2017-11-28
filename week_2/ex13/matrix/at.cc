#include "matrix.ih"

double &Matrix::at(size_t rowIdx, size_t colIdx)
{
	try
	{
		if (rowIdx >= d_nRows)
			throw out_of_range{"Exception: Out of bounds"};
		if (colIdx >= d_nCols)
            throw out_of_range{"Exception: Out of bounds"};
		return el(rowIdx, colIdx);
	}
    catch (exception &exc)
    {
        cout << exc.what() << '\n';
        throw;
    }
}