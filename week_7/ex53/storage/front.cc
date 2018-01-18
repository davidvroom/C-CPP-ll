#include "storage.ih"

string &Storage::front()
{
	lock_guard<mutex> lg(d_mutex);
	return d_queue.front();
}