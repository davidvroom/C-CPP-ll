#include "matrix.ih"

istream &operator>>(istream &in, Matrix const &matrix)
{
    return static_cast<istream &>((matrix.*matrix.d_extractMode)(in, matrix));
}
