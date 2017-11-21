#include "main.ih"
#include <iostream>

int main()
{
    Matrix mat{ 2, 3 };
    //Matrix mat2{{1,2},{3,4}};

	cout << mat << '\n';

    //cin >> mat(3,2, Matrix::BY_COLS);

    cin >> mat(Matrix::BY_COLS,1,1);

    cout << mat << '\n';

    //cout << mat(2,5);

    //mat(2,5);
    //cout << mat << '\n';


}


