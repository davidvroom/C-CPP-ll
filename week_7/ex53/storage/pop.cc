#include "storage.ih"

void Storage::pop()
{
	lock_guard<mutex> lg(d_mutex);
	d_queue.pop();
}
