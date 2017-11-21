#include "strings.ih"

Strings::Strings(Strings &&tmp)
:
    d_str(nullptr),
    d_size(0)
{
    swap(tmp);
}
