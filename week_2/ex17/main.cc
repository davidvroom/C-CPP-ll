#include "main.ih"

int main()
{
	ShowExcepts object(1, &test);
	try
	{
		object.asAthrowList();		// throws an exception
	}
	catch (bad_exception bad)
	{
		cout << bad.what() << '\n';
	}
	catch (...)
	{
		cout << "Caught exception in main\n";
	}
	try
	{
		object.asNoexcept();		// terminates program 
	}
	catch (...)
	{
		cout << "Will not be reached\n";
	}
}