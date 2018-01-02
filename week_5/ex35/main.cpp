#include <iostream>
#include <set>

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
}