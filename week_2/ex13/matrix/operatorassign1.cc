// this function offers the strong guarantee. The copy construction might 
// throw an excpetion, but this keeps the current data intact. Only if the
// copying succeeds, the data modified by operations which are guaranteed
// not to throw

#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
    Matrix tmp(other);
    swap(tmp);
    return *this;
}
