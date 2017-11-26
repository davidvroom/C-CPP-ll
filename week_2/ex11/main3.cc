#include "object/object.h"
#include <iostream>
using namespace std;

int main()
{
	try
	{
		Object object{ "object" };
		
		Object &ref = object;
		ref.hello();
		throw ref;
	}
	catch (Object &caughtObject)
	{
		cout << "Caught exception\n";
		caughtObject.hello();
	}
}