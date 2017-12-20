#include <vector>
#include <string>
#include <iostream>

class CSVLines: private std::vector<std::vector<std::string>>
{
    typedef std::vector<std::string> StrVector;

    public:
        CSVLines();

        void read();
        
        using std::vector<StrVector>::begin;
        using std::vector<StrVector>::end;
};

inline CSVLines::CSVLines()  
{
    assign(2, std::vector<std::string>(2, "hello "));
}

inline void CSVLines::read()
{
    std::cout << "read\n";
}

void process(std::vector<std::string> &strVect)
{
    //std::cout << "test\n";
    strVect[0] = std::string("hi");
    //std::cout << std::dec << &strVect[0] << '\n';
    //std::cout << std::dec << &strVect[1] << '\n';
    std::cout << *strVect.begin() << '\n';
}
// uses strVect's begin and end members.

int main()
{
    CSVLines csvLines;
    //std::cout << *csvLines.begin() << '\n';
    //process(csvLines.);
    csvLines.read();
    for (auto &next: csvLines)
        process(next);
}