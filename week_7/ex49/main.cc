#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

void waiting(bool &ready);

int main(int argc, char **argv)
{
	size_t nPrimes = stoull(argv[1]);
	bool ready = false;

	thread wait(waiting, ref(ready));
	auto startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());

	vector<size_t> vec{2};
	size_t next = 3;

	while (vec.size() != nPrimes)
	{
		auto iter = 
			find_if(vec.begin(), vec.end(),
				[next](size_t prime)
				{
					return next % prime == 0; 
				}
			);
		if (iter == vec.end())
			vec.push_back(next);
		++next;
	}

	auto endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
	ready = true;
	wait.join();

	for (size_t elem: vec)
		cout << elem << ' ';
	cout << '\n';

	cout << put_time(localtime(&startTime), "Starting time: %c") << '\n'
		 << put_time(localtime(&endTime), 	"Ending time:   %c") << '\n'
		 << "Computation of " << nPrimes << " primes took "
		 << endTime - startTime << " seconds\n";
 
}
