#include "storage.ih"

void Storage::push(string &line)
{
	lock_guard<mutex> lg(d_mutex);
	d_queue.push(line);
}