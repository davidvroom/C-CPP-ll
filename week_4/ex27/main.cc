#include <iostream>
#include "ofdstreambuf/ofdstreambuf.h"
#include <fcntl.h>

int main()
{
    int fd = open("test.txt", O_RDWR | O_CREAT, S_IRWXO);
    OFdStreambuf fds(fd, KEEP_FD);
    std::ostream os(&fds);
    os << "Hello, World!";
}
