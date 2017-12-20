#ifndef EX26_IFDSTREAMBUF_H
#define EX26_IFDSTREAMBUF_H

#include <streambuf>

class IFdStreambuf: public std::streambuf
{
    public:
        enum
        {
            BUFSIZE = 100
        };

        enum Mode
        {
            KEEP_FD,
            CLOSE_FD
        };

    protected:
        int d_fd;
        Mode d_mode;
        char *d_buffer = nullptr;

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
