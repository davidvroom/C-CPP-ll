#include <iostream>
#include <functional>
#include <future>
#include <thread>
#include <iomanip>
#include <utility>

using namespace std;

double lhs[4][5] = {
	{1, 2, 3, 4, 1}, 
	{3, 4, 5, 7, 4},
	{2, 4, 5, 9, 3},
	{21, 8, 9, 42, 4}
};

double rhsT[6][5] = {
	{1, 2, 3, 4, 2}, 
	{3, 4, 5, 7, 2},
	{2, 4, 5, 90, 3},
	{21, 8, 9, 42, 4},
	{1, 2, 3, 4, 8}, 
	{3, 4, 5, 7, 4}
};

double innerProduct(int row, int col) 
{
	double sum = 0;
	for (int idx = 0; idx != 5; ++idx)
		sum += lhs[row][idx] * rhsT[col][idx];
    return sum;
}

int main()
{

	packaged_task<double (int, int)> task;
	task = packaged_task<double (int, int)> (innerProduct);
	//packaged_task<double (int, int)> task(innerProduct);
	//packaged_task<double (int, int)> task(innerProduct);


	future<double> fut1 = task.get_future();
		thread(move(task), 0, 0).detach();
			cout << setw(5) << fut1.get();
/*

	task.reset();
	future<double> fut2 = task.get_future();
		//thread(move(task), 0, 1).detach();
			cout << setw(5) << fut2.get();


	task.reset();
	future<double> fut3 = task.get_future();
		//thread(move(task), 0, 2).detach();
	cout << setw(5) << fut3.get();*/

	
	//future<double> fut[4][6];
	//fut[0][1] = task.get_future();

	//promise<double> result[4][6];
	for (int row = 0; row != 4; ++row)
		for (int col = 0; col != 6; ++col)
		{
			//fut[row][col] = task.get_future();
			//thread(move(task), row, col).detach();
		}

	for (int row = 0; row != 4; ++row)
	{
		for (int col = 0; col != 6; ++col)
		{
			//fut[row][col]{task.get_future()};
			//cout << setw(5) << fut[row][col].get();
		}
		cout << '\n';
	}
}