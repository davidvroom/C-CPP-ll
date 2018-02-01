#include "main.ih"

void client()
{
	while (true)
	{
		worker.wait();

		RC rc = getSpecs();
		if (rc.row == ROWS)
			return;

		pTask[rc.row][rc.col](rc);

		producer.notify_all();
	}
}