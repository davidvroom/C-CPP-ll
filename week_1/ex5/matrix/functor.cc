#include "matrix.ih"

Matrix &Matrix::operator()(size_t nRows, size_t nCols, Mode byCols)
{
    Matrix tmp{ nRows, nCols };
    swap(tmp);
    if (byCols)
        d_extractMode = &Matrix::extractCols;
    return *this;
}
