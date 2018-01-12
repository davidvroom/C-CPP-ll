#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char **argv)
{
    sort(argv + 1, argv + argc, greater<string>());
    copy(argv + 1, argv + argc, ostream_iterator<string>(cout));
    cout << '\n';

    sort(argv + 1, argv + argc, less<string>());
    copy(argv + 1, argv + argc, ostream_iterator<string>(cout));
    cout << '\n';
}
