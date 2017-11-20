#include "matrix.ih"

Matrix Matrix::operator+=(Matrix const &other) &&
{
	add(other);
	return move(*this);
}