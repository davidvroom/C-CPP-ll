#include "main.ih"

int main()
{
    ifstream is("text.txt");
    Vstring vstring(is);
    Vstring::Charmap vmap;

    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';

    display(vmap);
}
