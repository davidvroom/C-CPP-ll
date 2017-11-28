#include "object/object.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	cout << argv[0] << ' ' << argv[1] << '\n';	// show program call
	try
	{
		Object object{ "object" };
		
		if (*argv[1] == 'a')
		{
			object.hello();
			throw object;
		}
		else if (*argv[1] == 'b')
		{
			Object &ref = object;
			ref.hello();
			throw ref;
		}
		else
			cout << "invalid program call\n";
	}
	catch (Object &caughtObject)
	{
		cout << "Caught exception\n";
		caughtObject.hello();
	}
}