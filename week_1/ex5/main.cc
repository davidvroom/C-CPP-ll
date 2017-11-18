#include "main.ih"
#include <iostream>

int main()
{
    Matrix mat1{{1,2},{3,4}};
    Matrix mat2{{1,2},{3,4}};
    
    mat1 += mat2;
    cout << "1: " << mat1[0][0] << '\n';

    Matrix mat3{ mat1 + mat2 };
    cout << "2: " << mat3[0][0] << '\n';

    Matrix mat4 = mat3;
    cout << "4: " << mat4[0][0] << '\n';

    mat4 = mat1 + mat2 + mat3;
    cout << "4: " << mat4[0][0] << '\n';

    mat1 += mat2 += mat2 += mat3;
	//cout << "final: " << mat4[0][0] << '\n';
}


