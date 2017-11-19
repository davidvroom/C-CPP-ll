#include "matrix.ih"

ostream &operator<<(ostream &out, Matrix const &matrix)
{
    for (size_t rowIdx = 0; rowIdx != matrix.d_nRows; ++rowIdx)
    {
        for (size_t colIdx = 0; colIdx != matrix.d_nCols; ++colIdx)
            out << matrix.el(rowIdx, colIdx) << " ";
        out << '\n'; // add newline after each row
    }
    return out;
}
