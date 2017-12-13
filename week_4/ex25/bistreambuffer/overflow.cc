#include "bistreambuffer.ih"

int BiStreamBuffer::overflow(int c)
{
    sync();
    if (c != EOF)
    {
        *pptr() = static_cast<char>(c);
        pbump(1);
    }
    return c;
}
