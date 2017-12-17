#include "derived.ih"

void Derived::parentProcess()
{
	cout << "Parent id: " << pid() << '\n';
}