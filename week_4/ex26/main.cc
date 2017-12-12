#include <iostream>
#include "ifdstreambuf/ifdstreambuf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd = open("text.txt", O_RDONLY | O_CREAT);
    std::cout << fd << '\n';
    IFdStreambuf fds(fd, KEEP_FD);
    fds.~IFdStreambuf();
    int fd2 = open("text2.txt", O_RDONLY | O_CREAT);
    std::cout << fd2 << '\n';

    std::istream is(&fds);
    std::cout << is.rdbuf() << std::endl;
    //STDIN_FILENO
}
