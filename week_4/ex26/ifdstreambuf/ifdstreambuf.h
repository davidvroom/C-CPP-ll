#ifndef EX26_IFDSTREAMBUF_H
#define EX26_IFDSTREAMBUF_H

#include <streambuf>
#include <unistd.h>
#include <iostream>

enum Mode
{
    KEEP_FD,
    CLOSE_FD
};

class IFdStreambuf: public std::streambuf
{
    protected:
        int d_fd;
        char d_buffer[100];
        Mode d_mode;

    public:
        explicit IFdStreambuf(int fd, Mode mode = KEEP_FD);
        explicit IFdStreambuf(Mode mode = KEEP_FD);
        virtual ~IFdStreambuf();

    private:
        int underflow() override;
};

#endif

inline IFdStreambuf::IFdStreambuf(Mode mode)
:
    d_fd(STDIN_FILENO),
    d_mode(mode)
{

}


inline IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_fd(fd),
    d_mode(mode)
{
    // buffer is initially full
    setg(d_buffer, d_buffer + 100, d_buffer + 100);
    std::cout << "constructor" << '\n';
}

inline int IFdStreambuf::underflow()
{
    std::cout << "\nUNDERFLOW()" << '\n';
    // when success number of bytes read is returned
    // 0 indicates end of file
    // -1 is returned when error
    if (read(d_fd, d_buffer, 1) <= 0)
        return EOF;

    setg(d_buffer, d_buffer, d_buffer + 1);
    return static_cast<unsigned char>(*gptr());
}
