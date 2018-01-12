#ifndef EX44_VSTRING_H
#define EX44_VSTRING_H

#include <vector>
#include <string>
#include <map>
#include <istream>

class Vstring: public std::vector<std::string>
{
    public:
        typedef std::map<char, size_t> Charmap;

        explicit Vstring(std::istream &in);

        size_t count(Charmap &cmap, bool (*accept)(char, Charmap &));

    private:
        static size_t countChar(std::string const &str, Charmap &cmap,
                                bool (*accept)(char, Charmap &));
};

#endif
