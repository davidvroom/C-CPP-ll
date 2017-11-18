#include "main.ih"

int main()
{
    Matrix mat{ 4, 6 };

    memcpy(mat[2], mat[1], 6 * sizeof(double));

    mat[2][3] = 23.5;
}

