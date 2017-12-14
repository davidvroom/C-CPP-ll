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
        Mode d_mode;
        size_t const d_bufsize = 100;
        char *d_buffer;
        

    public:
        explicit IFdStreambuf(Mode mode = KEEP_FD);         // 1
        explicit IFdStreambuf(int fd, Mode mode = KEEP_FD); // 2
        virtual ~IFdStreambuf();
        int close();
        void open(int fd, Mode mode = KEEP_FD);

    private:
        int underflow() override;
        std::streamsize xsgetn(char *dest, std::streamsize n) override;
};

#endif
