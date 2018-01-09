#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    set<string> setObj;

    cout << "Enter a sequence of words (enter \"done\" when done):\n";
    string word;
    while (cin >> word)
    {
        if (word == "done")
            break;
        setObj.insert(word);
    }

    vector<string> vecObj(setObj.begin(), setObj.end());

    cout << "1. Size: " << vecObj.size() << '\n'
         << "1. Capacity: " << vecObj.capacity() << '\n';

    vecObj.push_back("new");

    cout << "2. Size: " << vecObj.size() << '\n'
         << "2. Capacity: " << vecObj.capacity() << '\n';

    vector<string>(vecObj).swap(vecObj);

    cout << "3. Size: " << vecObj.size() << '\n'
         << "3. Capacity: " << vecObj.capacity() << '\n';
}
