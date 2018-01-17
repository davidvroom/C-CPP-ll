#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <chrono>

using namespace std;

void eratosthenes(vector<size_t> &vec, size_t nPrimes);

int main(int argc, char **argv)
{
	vector<size_t> vs;
	size_t nPrimes = stoull(argv[1]);
	thread primes(eratosthenes, ref(vs), nPrimes);

	cout << primes.joinable() << '\n';
	this_thread::sleep_for(chrono::seconds(10));
	cout << primes.joinable() << '\n';
	//primes.join();
	cout << primes.joinable() << '\n';


	/*
	while (primes.joinable())
	{
		cerr << '.';
		this_thread::sleep_for(chrono::seconds(1));
	}
	*/
}
