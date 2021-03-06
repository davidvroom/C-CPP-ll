#include "matrix.ih"

Matrix &Matrix::operator()(Mode byCols, size_t idxStart, size_t nSubLines)
{
    if (byCols)
    {
        d_extractMode = &Matrix::extractCols;

        if (idxStart >= d_nCols)
        {       // if requested submatrix lies outside matrix, do nothing
            d_idxColStart = d_nColEnd;
            return *this;
        }
        d_idxColStart = idxStart;
                // if number of sublines is not default and
                // submatrix lies within matrix, then set end of submatrix
        if (nSubLines == true and d_idxColStart + nSubLines < d_nCols)
            d_nColEnd = d_idxColStart + nSubLines;
    }
    else        // extract by rows
    {
        if (idxStart >= d_nRows)
        {       // if requested submatrix lies outside matrix, do nothing
            d_idxRowStart = d_nRowEnd;
            return *this;
        }
        d_idxRowStart = idxStart;
                // if number of sublines is not default and
                // submatrix lies within matrix, then set end of submatrix
        if (nSubLines == true and d_idxRowStart + nSubLines < d_nRows)
            d_nRowEnd = d_idxRowStart + nSubLines;
    }

    return *this;
}
