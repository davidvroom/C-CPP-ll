#include "main.ih"

int main()
try
{
	Matrix mat{ {1,2}, {3,4}, {5,6} };
    mat.at(5,0) = 3;            // will throw out of bounds
    cout << "Will not be executed" << '\n';
}
catch (...)
{}
