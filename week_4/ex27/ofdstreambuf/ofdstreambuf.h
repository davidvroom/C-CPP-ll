#ifndef EX27_OFDSTREAMBUF_H
#define EX27_OFDSTREAMBUF_H

#include <streambuf>

class OFdStreambuf: public std::streambuf
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
        explicit OFdStreambuf(Mode mode = KEEP_FD);         // 1
        explicit OFdStreambuf(int fd, Mode mode = KEEP_FD); // 2
        virtual ~OFdStreambuf();
        int close();
        void open(int fd, Mode mode = KEEP_FD);

    private:
        int sync() override;
        int overflow(int c) override;
};

#endif
