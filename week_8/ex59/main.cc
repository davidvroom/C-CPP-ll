#include "main.ih"

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




//PTask pTask[ROWS][COLS];

queue<RC> todoQueue;
mutex queueMutex;

Semaphore producer(NTHREADS);
Semaphore worker(NBUSYWORKERS);

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