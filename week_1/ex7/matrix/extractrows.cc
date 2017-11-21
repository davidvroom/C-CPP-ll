#include "matrix.ih"

std::istream &Matrix::extractRows(
    std::istream &in, Matrix const &matrix) const
{
    for (size_t rowIdx = matrix.d_idxRowStart;
         rowIdx != matrix.d_nRowEnd;
         ++rowIdx)
        for (size_t colIdx = matrix.d_idxColStart;
             colIdx != matrix.d_nColEnd;
             ++colIdx)
            in >> matrix.el(rowIdx, colIdx);
    return in;
}
