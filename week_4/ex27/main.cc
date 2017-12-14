#include <ostream>
#include "ofdstreambuf/ofdstreambuf.h"
#include <fcntl.h>

int main()
{
    int fd = open("test.txt", O_RDWR | O_CREAT, S_IRWXU);
    OFdStreambuf fds(fd, KEEP_FD);
    std::ostream os(&fds);
    
    os << "Hello world toch h";// << std::endl;

    fd = open("test2.txt", O_RDWR | O_CREAT, S_IRWXU);
    fds.open(fd);

    os << "output naar 2";
}
