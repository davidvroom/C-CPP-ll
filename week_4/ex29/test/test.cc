#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	cout << "base program\n";
	int id = fork();
	cout << "id: " << id << '\n';
	cout << "statement after fork\n";

}