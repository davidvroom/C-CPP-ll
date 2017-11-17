#include "matrix.ih"

bool Matrix::checkLength(initializer_list<initializer_list<double>> lists)
{
	auto begin = lists.begin();						// iterator
	size_t firstRowSize = (*begin).size();			// size of first row

	for (auto end = lists.end(); ++begin != end;)	// loop over all rows
    {
        if ((*begin).size() != firstRowSize)		// compare current and 1st row's size 
        	return false;
    }
    d_nCols = firstRowSize;							// initialize data member
    return true;
}
// Checks if all rows have equal length. 
// If so, set d_nCols and return ture. Else, returns false 