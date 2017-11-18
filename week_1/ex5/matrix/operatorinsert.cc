#include "matrix.ih"

ostream &operator<<(std::ostream &out, Matrix const &matrix)
{
    for (size_t rowIdx = 0; rowIdx != matrix.d_nRows; ++rowIdx)
    {
        for (size_t colIdx = 0; colIdx != matrix.d_nCols; ++colIdx)
            out << matrix.el(rowIdx, colIdx) << " ";

        out << '\n';
    }

    return out;
}
