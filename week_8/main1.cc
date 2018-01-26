#include <iostream>
#include <functional>
#include <future>
#include <thread>
#include <iomanip>

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

void innerProduct(promise<double> &ref, int row, int col) 
{
	double sum = 0;
	for (int idx = 0; idx != 5; ++idx)
		sum += lhs[row][idx] * rhsT[col][idx];
    ref.set_value(sum);
}

int main()
{
	promise<double> result[4][6];
	for (int row = 0; row != 4; ++row)
		for (int col = 0; col != 6; ++col)
			thread(innerProduct, ref(result[row][col]), row, col).detach();

	for (int row = 0; row != 4; ++row)
	{
		for (int col = 0; col != 6; ++col)
			cout << setw(5) << result[row][col].get_future().get();
		cout << '\n';
	}
}