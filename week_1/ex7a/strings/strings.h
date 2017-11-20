#ifndef EX62_STRINGS_
#define EX62_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    size_t d_capacity = 1;
    std::string **d_str;

    public:
        friend bool operator==(Strings const &lhs, Strings const &rhs);
        friend bool operator!=(Strings const &lhs, Strings const &rhs);

        Strings();
        Strings(int argc, char **argv);
        Strings(char **environLike);
        Strings(Strings const &outerStrings);   // copy constructor
        Strings(Strings &&tmp);                 // move constructor

        ~Strings();
                            // copy assignment operator
        Strings &operator=(Strings const &outerStrings);
                            // move assignment operator
        Strings &operator=(Strings &&tmp);

        void swap(Strings &other);

        size_t size() const;
        size_t capacity() const;
        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);

        void resize(size_t newSize);
        void reserve(size_t newCapacity);

    private:
        std::string &safeAt(size_t idx) const;  // private backdoor
        std::string **storageArea();
        void destroy();                 
        std::string **enlarged();
        std::string **rawPointers(size_t nPointers);
};

inline size_t Strings::size() const
{
    return d_size;
}

inline size_t Strings::capacity() const
{
    return d_capacity;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}
        
#endif

