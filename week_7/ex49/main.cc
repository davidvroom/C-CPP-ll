#include "main.ih"

int main(int argc, char **argv)
{
	size_t nPrimes = stoull(argv[1]);
	bool ready = false;

	thread wait(waiting, ref(ready));
	auto startTime = system_clock::to_time_t(system_clock::now());

	vector<size_t> vec{2};
	size_t next = 3;

	while (vec.size() != nPrimes) 
	{	
		// Eratosthenes sieve		
		auto iter = 
			find_if(vec.begin(), vec.end(),
				[=](size_t prime)
				{
					return next % prime == 0; 
				}
			); 
		if (iter == vec.end()) 
			vec.push_back(next); // next is prime number
		++next;
	}

	auto endTime = system_clock::to_time_t(system_clock::now());
	ready = true; // Notify waiting thread that computation finished
	wait.join();

	for (size_t elem: vec)
		cout << elem << ' ';
	cout << '\n';

	cout << put_time(localtime(&startTime), "Starting time: %c") << '\n'
		 << put_time(localtime(&endTime), "Ending time:   %c") << '\n'
		 << "Computation of " << nPrimes << " primes took "
		 << endTime - startTime << " seconds\n";
}
