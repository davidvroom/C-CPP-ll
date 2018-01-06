#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


class Vstring: public vector<string>
{
    vector<string> d_vs;

    public:
        typedef map<char, size_t> Charmap;

        explicit Vstring(istream &in);

        size_t count(Charmap &cmap, bool (*accept)(char, Charmap &));

    private:
        //static size_t countChar(string const &str, Charmap &cmap, bool (*accept)(char, Charmap &));
};

Vstring::Vstring(istream &in)
{
    copy(istream_iterator<string>(in), istream_iterator<string>(),
         back_inserter(d_vs));
}

inline size_t Vstring::count(Charmap &cmap, bool (*accept)(char, Charmap &))
{
    for_each(d_vs.begin(),d_vs.end(),
             [&os,m](int x) { if (x%m==0) os << x << '\n'; } );
}

bool vowels(char, Vstring::Charmap &)
{

}

int main()
{
    Vstring vstring(cin);
    Vstring::Charmap vmap;

    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';
}