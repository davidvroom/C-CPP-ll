#include "ofdstreambuf.ih"

int OFdStreambuf::overflow(int c)
{
    sync();
    if (c != EOF)
    {
        *pptr() = c; // or static_cast<char>(c);
        pbump(1);
    }
    return c;
}
