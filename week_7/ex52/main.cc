#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>
#include "handler/handler.h"

using namespace std;

int main(int argc, char **argv)
{
	ofstream out(argv[1]);

	cout << "Give text: \n";
	string txt;
	getline(cin, txt);

	mutex shiftMutex;
	Handler object;
	thread th(
		[&]
		{
			object.shift(out, txt, shiftMutex);
		}
	);

	thread th2(
		[&]
		{
			Handler{}.shift(out, txt, shiftMutex);
		}
	);

	th.join();
	th2.join();
}
