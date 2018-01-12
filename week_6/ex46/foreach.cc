#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vi{1,3, -2, 5};
	for_each(vi.begin(), vi.end(),
		[](int &val)
		{
			val *= 2;
		}
	);

	for (int elem: vi)
		cout << elem << ' ';
	cout << '\n';
}