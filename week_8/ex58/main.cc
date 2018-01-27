#include <iostream>
#include <future>
#include <thread>
#include <iomanip>

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

future<double> fut[4][6];

double innerProduct(size_t row, size_t col) 
{
	double sum = 0;
	for (size_t idx = 0; idx != 5; ++idx)
		sum += lhs[row][idx] * rhsT[col][idx];
    return sum;
}

void computeElement(size_t row, size_t col)
{
	packaged_task<double (size_t, size_t)> task(innerProduct);
	fut[row][col] = task.get_future();
	thread(move(task), row, col).detach();
}

int main()
{
	for (size_t row = 0; row != 4; ++row)
		for (size_t col = 0; col != 6; ++col)
			computeElement(row, col);

	for (size_t row = 0; row != 4; ++row)
	{
		for (size_t col = 0; col != 6; ++col)
		{
			try
			{
				cout << setw(5) << fut[row][col].get();
			}
			catch (exception &msg)
			{
				cout << "Exception: " << msg.what() << '\n'; 
			}
		}
		cout << '\n';
	}
}
