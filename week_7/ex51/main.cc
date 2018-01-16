#include <iostream>
#include <chrono>
#include <iomanip>
#include <string.h>

using namespace std;
using namespace chrono;

int main(int argc, char **argv)
{
    					// get the current time
    time_point<system_clock> timePoint{system_clock::now()};

    					// convert it to a std::time_t:
    time_t time = system_clock::to_time_t(timePoint);
    			
    					// get a std::tm value:
    tm tmValue{ *localtime(&time) };

    					// display the time:
    cout << put_time(&tmValue, "current time: %c") << '\n';
    
    					// display the gmtime
    cout << put_time(gmtime(&time), "gmtime: %c") << '\n';

    string arg = argv[1];
    char suffix = arg.back();
    int count = stoi(arg);

    					// add specified time to now
    if (suffix == 's')
    	timePoint += seconds(count);
    else if (suffix == 'm')
    	timePoint += minutes(count);
    else if (suffix == 'h')
    	timePoint += hours(count);

						// convert it to a std::time_t:
    time_t newTime = system_clock::to_time_t(timePoint);

    					// get a std::tm value:
    tm newTmValue{ *localtime(&newTime) };

        				// display the time:
    cout << put_time(&newTmValue, "new time: %c") << '\n';
}