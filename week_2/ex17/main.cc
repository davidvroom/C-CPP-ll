#include "main.ih"

int main()
try
{
	ShowExcepts object(1, &test);
	//object.asAthrowList();

	//object.asNoexcept();
	object.NoEx();
}
catch (exception bad) // or bad_exception ?
{
	cout << bad.what() << '\n';
}
catch (...)
{
	cout << "caught expeption in main\n";
}