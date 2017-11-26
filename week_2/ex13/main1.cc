#include "main.ih"

int main()
try
{
	Matrix mat{{1,2}, {3,4}};
	cout << mat.at(1,1) << '\n';
}
catch (...)
{}