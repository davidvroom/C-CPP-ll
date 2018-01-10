#include "vstring.ih"

size_t Vstring::count(Charmap &cmap, bool (*accept)(char, Charmap &))
{
    size_t count = 0;
    for_each(
        begin(), end(),
        [&, accept](string &str)
        {
            count += countChar(str, cmap, accept);
        }
    );
    return count;
}
