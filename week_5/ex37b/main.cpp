#include <iostream>
#include <set>
#include "vectordata/vectordata.h"

using namespace std;

int main()
{
    set<string> object;

    cout << "Enter a sequence of words (enter \"done\" when done):\n";
    string word;
    while (cin >> word)
    {
        if (word == "done")
            break;
        object.insert(word);
    }

    VectorData vecObj;
    for (auto &next: object)
        vecObj.add(next);

    cout << "1. Size: " << vecObj.size() << '\n'
         << "1. Capacity: " << vecObj.capacity() << '\n';

    vecObj.add("new");

    cout << "2. Size: " << vecObj.size() << '\n'
         << "2. Capacity: " << vecObj.capacity() << '\n';

    VectorData(vecObj).swap(vecObj);

    cout << "3. Size: " << vecObj.size() << '\n'
         << "3. Capacity: " << vecObj.capacity() << '\n';
}
