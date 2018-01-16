#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void waiting(bool &ready)
{
	while (!ready)
	{
		cerr << '.';
		this_thread::sleep_for(chrono::seconds(1));
	}
	cerr << '\n';
}