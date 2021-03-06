// This function offers the basic guarantee. If it cannot make an identity
// matrix, the allocated memory is returned (handled in the corresponding
// constructor).

#include "matrix.ih"

Matrix Matrix::identity(size_t dim)
{
   	Matrix ret(dim, dim);
    
    for (size_t idx = 0; idx != dim; ++idx)
        ret.el(idx, idx) = 1;

    return ret;
}
