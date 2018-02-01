#include <iostream>
#include <future>
#include <thread>
#include <iomanip>
#include <mutex>
#include <queue>
#include "semaphore/semaphore.h"

using namespace std;

double lhs[4][5] = 
{
	{1, 2, 3, 4, 1}, 
	{3, 4, 5, 7, 4},
	{2, 4, 5, 9, 3},
	{21, 8, 9, 42, 4}
};

double rhsT[6][5] = 
{
	{1, 2, 3, 4, 2}, 
	{3, 4, 5, 7, 2},
	{2, 4, 5, 90, 3},
	{21, 8, 9, 42, 4},
	{1, 2, 3, 4, 8}, 
	{3, 4, 5, 7, 4}
};

enum
{
	ROWS = 4,
	COLS = 6,
	COMMON = 5,

	NTHREADS = 8,
	NBUSYWORKERS = 0
};

struct RC
{
	size_t row;
	size_t col;
};

typedef packaged_task<double (RC)> PTask;

PTask pTask[ROWS][COLS];

queue<RC> todoQueue;
mutex queueMutex;

mutex coutMutex;

Semaphore producer(NTHREADS);
Semaphore worker(NBUSYWORKERS);

double innerProduct(RC rc) 
{
	double sum = 0;
	for (size_t idx = 0; idx != COMMON; ++idx)
		sum += lhs[rc.row][idx] * rhsT[rc.col][idx];
    return sum;
}

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

void client()
{
	while (true)
	{
		worker.wait();

		RC rc = getSpecs();
		if (rc.row == ROWS)
			return;

		pTask[rc.row][rc.col](rc);

		producer.notify_all();
	}
}

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

int main()
{
	for (size_t idx = 0; idx != NTHREADS; ++idx)
		thread(client).detach();

	produce();

	for (size_t row = 0; row != 4; ++row)
	{
		for (size_t col = 0; col != 6; ++col)
		{
			try
			{
				cout << setw(5) << pTask[row][col].get_future().get();
			}
			catch (exception const &msg)
			{
				cout << "Exception: " << msg.what() << '\n'; 
			}
		}
		cout << '\n';
	}
}