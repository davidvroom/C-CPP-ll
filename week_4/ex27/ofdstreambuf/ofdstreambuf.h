#ifndef EX27_OFDSTREAMBUF_H
#define EX27_OFDSTREAMBUF_H

#include <streambuf>

enum Mode
{
    KEEP_FD,
    CLOSE_FD
};

class OFdStreambuf: public std::streambuf
{
    protected:
        int d_fd;
        char d_buffer[100];
        Mode d_mode;

        int pSync();

    public:
        explicit OFdStreambuf(Mode mode = KEEP_FD);         // 1
        explicit OFdStreambuf(int fd, Mode mode = KEEP_FD); // 2
        virtual ~OFdStreambuf();
        int close();
        void open(int fd, Mode mode = KEEP_FD);

    private:
        int sync() override;
};

#endif
