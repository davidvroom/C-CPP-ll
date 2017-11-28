#include "main.ih"

void test()
{
	cout << "test called\n";
	throw 1.5;			// case 1
	//throw 1;			// case 2
}