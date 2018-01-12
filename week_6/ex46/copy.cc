#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vi{-2, -1, 0, 1, 2};
	copy(vi.begin() + 2, vi.end(), vi.begin());

	for (int elem: vi)
		cout << elem << ' ';
	cout << '\n';
}