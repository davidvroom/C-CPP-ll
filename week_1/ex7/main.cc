#include "main.ih"
#include <iostream>

int main()
{
    Matrix mat1{{1,2},{3,4}};
    Matrix mat2{{1,2},{3,4}};
    bool val = mat1 != mat2;
    cout << val << '\n';
    //Matrix mat2{{1,2},{3,4}};

	//cout << mat << '\n'
    Matrix mat{ 2, 3 };

    cin >> mat(Matrix::BY_COLS,1,1);

    cout << mat << '\n';

}


