#include "main.ih"

int main(int argc, char **argv)
{
    					// get the current time
    time_point<system_clock> timePoint{system_clock::now()};

    printTime(timePoint);
    
    time_t time = system_clock::to_time_t(timePoint);

    					// display the gmtime
    //cout << put_time(gmtime(&time), "Gmtime: %c\n");

    string arg = argv[1];
    int count = stoi(arg);

    					// add or subtract specified time to now
    switch (char suffix = arg.back())
    {
        case 's': 
            timePoint += seconds(count);
        break;

        case 'm':
            timePoint += minutes(count);
        break;

        case 'h':
            timePoint += hours(count);
        break;

        default: 
            cout << "Invalid suffix\n";
    }

						// convert it to a std::time_t:
    time_t newTime = system_clock::to_time_t(timePoint);

        				// display the time:
    cout << put_time(localtime(&newTime), "New time: %c\n");
}