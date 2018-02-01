#include "semaphore.ih"

void Semaphore::wait()
{
	unique_lock<mutex> ul(d_mutex);
	while (d_nAvailable == 0)
		d_condition.wait(ul);

	--d_nAvailable;
}