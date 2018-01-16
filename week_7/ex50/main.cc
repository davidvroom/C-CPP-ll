#include<iostream>
#include<chrono>

using namespace std;
using namespace chrono;

int main()
{
	cout << "Hours: ";
	int nHours;
	cin >> nHours;

	cout << "is equal to " 
	     << minutes(hours(nHours)).count() 
	     << " minutes\n";

	cout << "Seconds: ";
	int nSec;
	cin >> nSec;

	cout << "is equal to "
	     << seconds(nSec).count() / seconds(minutes(1)).count()
	     << " minutes\n";
}