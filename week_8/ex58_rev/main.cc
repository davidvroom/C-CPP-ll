#include <iostream>
#include <future>
#include <thread>
#include <iomanip>
#include <numeric>

using namespace std;

enum
{
	ROWS = 4,
	COLS = 6,
	COMMON = 5,
};

double innerProductWrapper(double *rowPtr, double *colPtr) 
{
	return inner_product(rowPtr, rowPtr + COMMON, colPtr, 0);
}

void computeElement(double *rowPtr, double *colPtr, size_t row, size_t col, future<double> (*fut)[COLS])
{
	packaged_task<double (double *, double *, double *, double)> task(inner_product<double *, double *, double>);
	fut[row][col] = task.get_future();
	thread(move(task), rowPtr, rowPtr + COMMON, colPtr, 0).detach();
}

int main()
{
	double lhs[ROWS][COMMON] = 
	{
		{1, 2, 3, 4, 1}, 
		{3, 4, 5, 7, 4},
		{2, 4, 5, 9, 3},
		{21, 8, 9, 42, 4}
	};

	double rhsT[COLS][COMMON] = 
	{
		{1, 2, 3, 4, 2}, 
		{3, 4, 5, 7, 2},
		{2, 4, 5, 90, 3},
		{21, 8, 9, 42, 4},
		{1, 2, 3, 4, 8}, 
		{3, 4, 5, 7, 4}
	};

	future<double> fut[ROWS][COLS];

	for (size_t row = 0; row != ROWS; ++row)
		for (size_t col = 0; col != COLS; ++col)
			computeElement(lhs[row], rhsT[col], row, col, fut);

	for (size_t row = 0; row != ROWS; ++row)
	{
		for (size_t col = 0; col != COLS; ++col)
		{
			try
			{
				cout << setw(5) << fut[row][col].get();
			}
			catch (exception &msg)
			{
				cout << "Exception: " << msg.what() << '\n'; 
				return 1;
			}
		}
		cout << '\n';
	}
}
