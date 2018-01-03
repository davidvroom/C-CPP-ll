#include <vector>
#include <string>

using namespace std;

class Derived: private vector<string>
{
    public:
    	Derived() = default;
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
