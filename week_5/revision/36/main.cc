#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, size_t> object;

    cout << "Enter a sequence of words (enter \"done\" when done):\n";
    string word;
    while (cin >> word)
    {
        if (word == "done")
            break;

        if (object.count(word)) 
            object[word] += 1;  // word already entered, so increment count
        else                    // new word, insert and set count to 1
            object.insert(pair<string, size_t>{ word, 1 });
    }

    for (auto iter = object.begin(); iter != object.end(); ++iter)
        cout << iter->first << ' ' << iter->second << '\n';    
}
