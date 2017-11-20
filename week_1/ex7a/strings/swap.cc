#include "strings.ih"

void Strings::swap(Strings &other)
{
    enum
    {
        SIZE = sizeof(Strings)
    };

    char buffer[SIZE];

    memcpy(buffer, this, SIZE);
    memcpy(this, &other, SIZE);
    memcpy(&other, buffer, SIZE);
}
