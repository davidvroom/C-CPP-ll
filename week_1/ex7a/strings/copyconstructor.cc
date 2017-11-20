#include "strings.ih"

Strings::Strings(Strings const &outerStrings)
:
    d_str(rawPointers(outerStrings.d_capacity)),
    d_size(outerStrings.d_size),
    d_capacity(outerStrings.d_capacity)
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_str[idx] = new string(*outerStrings.d_str[idx]);
}