#include "main.ih"

int main(int argc, char **argv)
{
    time_point<system_clock> timePoint{system_clock::now()};

    printTime(timePoint);

    printTime(timePoint, TimeMode::GMTIME);

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
        return 1;
    }

    cout << "Below the modified time.\n";
    printTime(timePoint);
}