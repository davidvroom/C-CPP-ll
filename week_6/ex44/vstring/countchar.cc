#include "vstring.ih"

size_t Vstring::countChar(string const &str, Charmap &cmap, bool (*accept)(char, Charmap &))
{
    return count_if(
        str.begin(), str.end(),
        [&, accept](char ch)
        {
            return accept(ch, cmap);
        }
    );
}