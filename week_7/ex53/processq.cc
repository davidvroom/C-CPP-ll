#include "main.ih"

void processQ(Storage &storage, string const &fileName)
{
	ofstream file{ fileName };

	while (!storage.finished())
	{
		this_thread::sleep_for(seconds(1));
		if (!storage.empty())
		{
			file << storage.front() << '\n';
			storage.pop();
		}
	}
}
