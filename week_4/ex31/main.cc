#include "main.ih"

int main()
{
    Base *base[4] = { new A{}, new C{} };

    cout << "cloning 1\n";

    base[2] = base[0]->clone();
    base[3] = base[1]->clone();

    cout << "cloning 2\n";

    for (auto bp: base)
        bp->clone();
}
