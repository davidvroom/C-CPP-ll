#ifndef EX26_IFDSTREAMBUF_H
#define EX26_IFDSTREAMBUF_H

#include <streambuf>

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
        explicit IFdStreambuf(Mode mode = KEEP_FD);
        explicit IFdStreambuf(int fd, Mode mode = KEEP_FD);
        virtual ~IFdStreambuf();
        int close();

    private:
        int underflow() override;
};

#endif
