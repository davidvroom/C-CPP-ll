#include "derived.ih"

void Derived::childProcess()
{
	cout << "Child id: " << pid() << '\n';
}