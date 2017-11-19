#include "matrix.ih"

std::istream &Matrix::extractCols(std::istream &in, Matrix const &matrix) const
{
    for (size_t colIdx = 0; colIdx != matrix.d_nCols; ++colIdx)
        for (size_t rowIdx = 0; rowIdx != matrix.d_nRows; ++rowIdx)
            in >> matrix.el(rowIdx, colIdx);
    return in;
}
