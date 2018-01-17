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

    					// display the time:
    cout << left << setw(14) << "Current time:" 
         << put_time(localtime(&time), "%c") << '\n';
    
    					// display the gmtime
    cout << left << setw(14) << "Gmtime:" 
         << put_time(gmtime(&time), "%c") << '\n';

    string arg = argv[1];
    char suffix = arg.back();
    int count = stoi(arg);

    					// add or subtract specified time to now
    if (suffix == 's')
    	timePoint += seconds(count);
    else if (suffix == 'm')
    	timePoint += minutes(count);
    else if (suffix == 'h')
    	timePoint += hours(count);

						// convert it to a std::time_t:
    time_t newTime = system_clock::to_time_t(timePoint);

        				// display the time:
    cout << left << setw(14) << "New time:" 
         << put_time(localtime(&newTime), "%c") << '\n';
}