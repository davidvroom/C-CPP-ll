#include "main.ih"

RC getSpecs()
{
	lock_guard<mutex> lg(queueMutex);
	RC ret = todoQueue.front();

	if (ret.row == ROWS)
	{
		worker.notify_all();
		return ret;
	}

	todoQueue.pop();
	return ret;
}