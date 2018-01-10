#include "main.ih"

void display(Vstring::Charmap &cmap)
{
    for_each(
        cmap.begin(), cmap.end(),
        [](auto const &value)
        {
            cout << value.first << ": " << value.second << '\n';
        }
    );
}