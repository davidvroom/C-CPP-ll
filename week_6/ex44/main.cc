#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;


class Vstring: public vector<string>
{
    vector<string> d_vs;

    public:
        typedef map<char, size_t> Charmap;

        explicit Vstring(istream &in);

        size_t count(Charmap &cmap, bool (*accept)(char, Charmap &));

        void display(Charmap &cmap);

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
    size_t count = 0;
    for_each(
        d_vs.begin()->begin(), d_vs.end()->end(),
        [&, accept](char &ch)
        {
            if (accept(ch, cmap))
                ++count;
        }
    );
    return count;
}

void Vstring::display(Charmap &cmap)
{
    for_each(
        cmap.begin(), cmap.end(),
        [](auto const &value)
        {
            cout << value.first << ": " << value.second << '\n';
        }
    );
}

//size_t Vstring::countChar(string const &str, Charmap &cmap, bool (*accept)(char, Charmap &))
//{
//}


bool vowels(char c, Vstring::Charmap &cmap)
{
    if (string("aeiuoAEIUO").find(c) != string::npos)
    {
        ++cmap[c];
        return true;
    }
    return false;
}

int main()
{
    ifstream is("text.txt");
    Vstring vstring(is);
    Vstring::Charmap vmap;

    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';
    vstring.display(vmap);
}