#include "semaphore.ih"

void Semaphore::notify()
{
	lock_guard<mutex> lg(d_mutex);

	if (d_nAvailable++ == 0)
		d_condition.notify_one();
}