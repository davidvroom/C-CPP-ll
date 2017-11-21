#include "matrix.ih"

Matrix &Matrix::operator()(Mode byCols,
    size_t idxRowStart, size_t nSubRows, size_t idxColStart, size_t nSubCols)
{
    if (idxRowStart >= d_nRows or idxColStart >= d_nCols)
    {                   // if submatrix lies outside matrix then do nothing
        d_idxRowStart = d_nRowEnd;
        d_idxColStart = d_nColEnd;
        return *this;
    }

    d_idxRowStart = idxRowStart; // set start values submatrix
    d_idxColStart = idxColStart;

    if (byCols)
        d_extractMode = &Matrix::extractCols;

    // if within matrix set end values of submatrix
    if (d_idxRowStart + nSubRows < d_nRows)
        d_nRowEnd = d_idxRowStart + nSubRows;

    if (d_idxColStart + nSubCols < d_nCols)
        d_nColEnd = d_idxColStart + nSubCols;

    return *this;
}
