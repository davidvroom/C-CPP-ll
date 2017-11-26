// this function offers the nothrow guarantee, because both 
// of its operations offer this.

#include "matrix.ih"

Matrix &Matrix::operator=(Matrix &&tmp)
{
    swap(tmp);
    return *this;
}
