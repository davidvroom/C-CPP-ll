#include "main.ih"
#include <iostream>

int main()
{
    Matrix mat{ 2, 2 };
    //Matrix mat2{{1,2},{3,4}};

	cout << mat << '\n';

    cin >> mat(2,2, Matrix::BY_COLS);

    cout << mat << '\n';
}


