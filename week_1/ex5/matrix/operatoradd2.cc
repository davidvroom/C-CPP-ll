#include "matrix.ih"

Matrix operator+(Matrix &&lhs, Matrix const &rhs)
{
	lhs.add(rhs);
	return move(lhs);
}