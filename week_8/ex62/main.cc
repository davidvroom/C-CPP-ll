#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <future>

using namespace std;

string threadFun()
{
	cerr << "entry\n";

	this_thread::sleep_for(chrono::seconds(5));
	cerr << "first cerr \n";

	this_thread::sleep_for(chrono::seconds(5));
	cerr << "second cerr\n";

	return "done\n";
}

int main()
{
	future<string> fut = std::async(launch::async, threadFun);

	size_t count = 0;

	while (true)
	{
		this_thread::sleep_for(chrono::seconds(1));
    	cerr << "inspecting: " << ++count << '\n';
		
		future_status status = fut.wait_for(0ms); 
		if (status == future_status::ready)
			break;
	}

	try
	{
		cout << fut.get();
	}
	catch (exception const &msg)
	{
		cout << msg.what() << '\n';
	}
}