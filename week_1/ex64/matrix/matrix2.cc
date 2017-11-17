#include "matrix.ih"

Matrix::Matrix(initializer_list<initializer_list<double>> lists)
{
	if (!checkLength(lists))
	{
		cout << "Warning: matrix rows have different sizes! Program is terminated\n";
		exit(1);
	}
	d_nRows = lists.size();         // d_nCols is set by checkLength()
	d_nElements = d_nRows * d_nCols;
	d_data = new double[d_nElements];
	size_t idx = 0;
		                            // loop over all rows
	for (auto itrRow = lists.begin(); itrRow != lists.end(); ++itrRow)
	{
		initializer_list<double> row = *itrRow;
			                        // loop over all columns
		for (auto itrCol = row.begin(); itrCol != row.end(); ++itrCol, ++idx)
			d_data[idx] = *itrCol;
	}
} 