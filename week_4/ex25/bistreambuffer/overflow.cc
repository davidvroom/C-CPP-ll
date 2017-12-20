#include "bistreambuffer.ih"

int BiStreamBuffer::overflow(int c)
{
    if (c == EOF)
    {
        d_one.flush();
        d_two.flush();
    }
    else
    {
        d_one.put(c);
        d_two.put(c);
    }
    return c;
}
