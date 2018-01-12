#include "main.ih"

bool vowels(char c, Vstring::Charmap &cmap)
{
    if (string("aeiuoAEIUO").find(c) != string::npos)
    {
        ++cmap[c];
        return true;
    }
    return false;
}