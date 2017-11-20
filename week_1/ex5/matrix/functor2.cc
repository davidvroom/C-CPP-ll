#include "matrix.ih"

Matrix &Matrix::operator()(Mode byCols, size_t idxStart, size_t remLines)
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
                // if a valid third argument is given
        if (remLines and d_idxColStart + remLines < d_nCols)
            d_nColEnd = d_idxColStart + remLines;
    }
    else        // extract by rows
    {
        if (idxStart >= d_nRows)
        {       // if requested submatrix lies outside matrix, do nothing
            d_idxColStart = d_nRowEnd;
            return *this;
        }
        d_idxRowStart = idxStart;
                // if a valid third argument is given
        if (remLines and d_idxRowStart + remLines < d_nRows)
            d_nRowEnd = d_idxRowStart + remLines;
    }

    return *this;
}
