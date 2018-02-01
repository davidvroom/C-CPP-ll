#include "main.ih"

double innerProduct(RC rc) 
{
	double sum = 0;
	for (size_t idx = 0; idx != COMMON; ++idx)
		sum += lhs[rc.row][idx] * rhsT[rc.col][idx];
    return sum;
}