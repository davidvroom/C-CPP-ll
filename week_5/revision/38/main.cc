#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char **argv)
{
    typedef unordered_multimap<string, string> container;

    container object({{ "Netherlands", "Amsterdam" },
                      { "Belgium", "Brussels" },
                      { "Belgium", "Antwerp" },
                      { "France", "Nice" },
                      { "France", "Paris" }});

    size_t nUniqueKeys = unordered_map<string, string>
                        (object.begin(), object.end()).size();
    cout << "There are " << nUniqueKeys
         << " unique keys in the container\n";
}
