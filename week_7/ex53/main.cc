#include "main.ih"

int main()
{
	Storage storage;
	string fileName = "output.txt";

	thread thr(processQ, ref(storage), ref(fileName));

	string line;
	while (getline(cin, line))
		storage.push(line);

	storage.setFinished();
	thr.join();
}
