#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool vowels(char c, Vstring::Charmap &cmap)
{
    
}

class Vstring: public vector<string>
{
    public:
        typedef map<char, size_t> Charmap;

        Vstring(istream &in);

        size_t count(Charmap &cmap, bool (*accept)(char, Charmap &));

    private:
        static size_t countChar(string const &str, Charmap &cmap, bool (*accept)(char, Charmap &));
};

int main()
{
    Vstring vstring(cin);
    Vstring::Charmap vmap;

    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';
}