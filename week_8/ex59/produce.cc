#include "main.ih"

void produce()
{
	for (size_t row = 0; row != ROWS; ++row)
	{
		for (size_t col = 0; col != COLS; ++col)
		{
			producer.wait();
			pTask[row][col] = PTask(innerProduct);
			{
				lock_guard<mutex> lg(queueMutex);
				todoQueue.push(RC{ row, col });
			}
			worker.notify_all(); 
		}
	}
	todoQueue.push(RC{ ROWS, COLS });
	worker.notify_all(); // notify threads to stop
}