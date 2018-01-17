#include "main.ih"

void waiting(bool &ready)
{
	while (!ready)
	{
		cerr << '.';
		this_thread::sleep_for(seconds(1));
	}
	cerr << '\n';
}