#include "storage.ih"

bool Storage::empty() const
{
	return d_queue.empty();
}
