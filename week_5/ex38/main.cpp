#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

size_t countKeys(unordered_multimap<string, string> &container)
{
    double count = 0;

    for (auto& element: container)
        count += 1.0/container.count(element.first);

    return static_cast<size_t>(count);
}

int main(int argc, char **argv)
{
    typedef unordered_multimap<string, string> container;

    container object({{ "Netherlands", "Amsterdam" },
                      { "Belgium", "Brussels" },
                      { "Belgium", "Antwerp" },
                      { "France", "Nice" },
                      { "France", "Paris" }});

    size_t nUniqueKeys = countKeys(object);

    cout << "There are " << nUniqueKeys
         << " unique keys in the container\n";
}
