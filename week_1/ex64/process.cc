#include "matrix/matrix.h"

void process(Matrix &mat)
{
	mat = Matrix::identity(mat.nRows());	
}
// this function changes a square Matrix of any dimension into an identity matrix