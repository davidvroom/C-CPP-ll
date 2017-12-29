#include <vector>
#include <string>
#include <iostream>

class CSVLines: private std::vector<std::vector<std::string>>
{
    typedef std::vector<std::string> StrVector;

    public:
        CSVLines();

        void read() const;

        using std::vector<StrVector>::const_iterator;

        const_iterator begin() const;
        const_iterator end() const;
};

inline CSVLines::const_iterator CSVLines::begin() const
{
    return std::vector<StrVector>::cbegin();
}

inline CSVLines::const_iterator CSVLines::end() const
{
    return std::vector<StrVector>::cend();
}

inline CSVLines::CSVLines()  
{
    std::cout << "Constructor CSVLines called\n";
    assign(2, std::vector<std::string>{ "one", "two" });
}

inline void CSVLines::read() const
{
    std::cout << "read() called\n";
}

void process(std::vector<std::string> const &strVect)
{
    std::cout << *strVect.begin()
              << '\n'
              << *(strVect.end()-1)
              << '\n';
}

int main()
{
    CSVLines csvLines;

    csvLines.read();
    for (auto &next: csvLines)
        process(next);
}
