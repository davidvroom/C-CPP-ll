#ifndef INCLUDED_BISTREAMBUFFER_
#define INCLUDED_BISTREAMBUFFER_

#include <streambuf>

class BiStreamBuffer: public std::streambuf 
{
    std::ofstream &d_one;
    std::ofstream &d_two;

    public:
       BiStreamBuffer(std::ofstream &one, std::ofstream &two);

    private:
        int overflow(int c) override;
};
        
#endif
