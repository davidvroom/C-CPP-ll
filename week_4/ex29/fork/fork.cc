#include "fork.ih"

void Fork::fork()
{
	if ((d_pid = ::fork()) < 0)
		throw "fork failed";
	else if (d_pid == 0 )
	{ 
		childProcess();
		exit(1);
	}
	else
		parentProcess();
}