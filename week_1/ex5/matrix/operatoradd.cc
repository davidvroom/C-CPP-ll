#include "matrix.ih"

Matrix operator+(Matrix const &lhs, Matrix const &rhs)
{
	Matrix tmp{ lhs };
	tmp.add(rhs);
	return tmp;
}