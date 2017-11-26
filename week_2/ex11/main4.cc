#include "object/object.h"
#include <iostream>
using namespace std;

int main()
{
	try
	{
		try
		{
			Object object{ "object" };
			object.hello();
			throw object;
		}
		catch (Object &caughtObject)
		{
			cout << "Caught exception in inner block\n";
			caughtObject.hello();
			throw;
		}
	}
	catch (Object &caughtObject)
	{
		cout << "Caught exception in outer block\n";
		caughtObject.hello();
	}
}