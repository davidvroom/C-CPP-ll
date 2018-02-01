#include <iostream>
#include <future>
#include <thread>
#include <iomanip>
#include "semaphore/semaphore.h"
#include <mutex>
#include <queue>
#include <utility>

using namespace std;

Semaphore workers(8); // number of threads that are available for a job
Semaphore jobs(0); // jobs that need to be done

mutex todoMutex;
queue<pair<size_t, size_t>> todoQueue;

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

mutex futureMutex;
future<double> fut[4][6];

double innerProduct(size_t row, size_t col) 
{
	double sum = 0;
	for (size_t idx = 0; idx != 5; ++idx)
		sum += lhs[row][idx] * rhsT[col][idx];
    return sum;
}

bool nextJob(pair<size_t, size_t> &pair)
{
	lock_guard<mutex> lg(todoMutex);
	if (todoQueue.empty())
	{
		jobs.notify(); // notify remaining threads to stop
		return false;
	}
	pair = todoQueue.front();
	todoQueue.pop();
	return true;
}

void worker()
{
	while (true)
	{
		jobs.wait();
		pair<size_t, size_t> pair;
		if (not nextJob(pair))
		{
			cout << "stop thread\n";
			return;
		}
		packaged_task<double (size_t, size_t)> task(innerProduct);
		{
			lock_guard<mutex> lg(futureMutex);
			fut[pair.first][pair.second] = task.get_future();
			task(pair.first, pair.second);
		}
		workers.notify();
	}
}

void process()
{
	for (size_t row = 0; row != 4; ++row)
	{
		for (size_t col = 0; col != 6; ++col)
		{
			workers.wait();
			{
				lock_guard<mutex> lg(todoMutex);
				todoQueue.push(pair<size_t, size_t> (row, col));
			}
			jobs.notify(); 
		}
	}
	jobs.notify(); // notify threads to stop
}

int main()
{
	for (size_t idx = 0; idx != 8; ++idx)
		thread(worker).detach();

	process();

	while (not todoQueue.empty())
		;

	cout << todoQueue.size() << '\n';
	for (size_t row = 0; row != 4; ++row)
	{
		for (size_t col = 0; col != 6; ++col)
		{
			try
			{
				cout << setw(5) << fut[row][col].get();
			}
			catch (exception const &msg)
			{
				cout << "Exception: " << msg.what() << '\n'; 
			}
		}
		cout << '\n';
	}
}
