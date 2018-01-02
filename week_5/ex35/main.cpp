#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    multiset<string> object;

    cout << "Enter a sequence of words (enter \"done\" when done):\n";
    string word;
    while (cin >> word)
    {
        if (word == "done")
            break;
        object.insert(word);
    }

    for (auto &next: object)
        cout << next << ' ';
    cout << '\n';

    for (auto it = object.begin(), prev = object.end(); it != object.end(); prev = it, ++it)
        if (*it != *prev)
            cout << *it << ' ' << object.count(*it) << '\n';

    vector<string> vecObj;
    for (auto it = object.begin(), prev = object.end(); it != object.end(); prev = it, ++it)
        if (*it != *prev)
            vecObj.push_back(*it);
}
