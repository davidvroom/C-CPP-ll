#include "main.ih"

int main()
try
{
	Matrix mat{{1,2}, {3,4}, {5,6}};
	//cout << mat.at(3,1) << '\n';
	mat.at(0,0) = 10;
	//mat.tr();
	cout << mat.at(0,0) << '\n';
}
catch (...)
{}