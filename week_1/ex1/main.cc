#include <iostream>

namespace First
{
    enum Enum
    {};

    void fun(First::Enum symbol)
    {
        std::cout << "First::fun called\n";
    }
}

namespace Second
{
    void fun(First::Enum symbol)
    {
        std::cout << "Second::fun called\n";
    }
}

int main()
{
    First::Enum symbol;

    fun(symbol);            // First::fun called
}
