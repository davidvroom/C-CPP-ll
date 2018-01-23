#include "main.ih"

void printTime(time_point<system_clock> const &timePoint, TimeMode mode)
{
	    				// convert it to a std::time_t:
    time_t time = system_clock::to_time_t(timePoint);

    if (mode == GMTIME) // display the time:
    {
		cout << put_time(gmtime(&time), "Gmtime: %c\n");
    	return;
    }

    cout << put_time(localtime(&time), "Local time: %c\n");
}
