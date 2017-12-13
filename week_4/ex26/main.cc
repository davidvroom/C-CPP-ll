#include <iostream>
#include "ifdstreambuf/ifdstreambuf.h"
#include <fcntl.h>

int main()
{
	int fd = open("test.txt", O_RDONLY);
	IFdStreambuf fds(fd, KEEP_FD);
    std::istream is(&fds);
    std::cout << is.rdbuf() << std::endl;

	fd = open("test2.txt", O_RDONLY);
    fds.open(fd, KEEP_FD);

    std::cout << is.rdbuf() << std::endl;
}

/*int fd = open("text.txt", O_RDONLY | O_CREAT);
std::cout << fd << '\n';
IFdStreambuf fds(fd, KEEP_FD);
fds.~IFdStreambuf();
int fd2 = open("text2.txt", O_RDONLY | O_CREAT);
std::cout << fd2 << '\n';
IFdStreambuf fds(STDIN_FILENO);
IFdStreambuf fds(KEEP_FD);
 */
