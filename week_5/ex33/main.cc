#include <iostream>
#include <vector>

using namespace std;

class Derived: private vector<string>
{
    public:
        Derived(initializer_list<string> iniList);
};

Derived::Derived(initializer_list<string> iniList)
:
    vector(iniList)
{}

int main()
{
    Derived derived{ "Klaas", "David", "Jurjen", "Frank" };
}
