#include "matrix.ih"

Matrix &Matrix::operator+=(Matrix const &other) &
{
	Matrix tmp{ *this };
	tmp.add(other);
	swap(tmp);
	return *this;
}