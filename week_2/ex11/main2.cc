#include "object/object.h"
#include <iostream>
using namespace std;

int main()
{
	try
	{
		Object object{ "object" };
		object.hello();
		throw object;
	}
	catch (Object &caughtObject)
	{
		cout << "Caught exception\n";
		caughtObject.hello();
	}
}