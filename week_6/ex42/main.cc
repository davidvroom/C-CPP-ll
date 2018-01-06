#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Derived: public string
{
    friend istream &operator>>(istream &istr, Derived &str);
};

istream &operator>>(istream &istr, Derived &str)
{
    return std::getline(istr, str);
}

int main()
{
    vector<string> vs;

    copy(istream_iterator<Derived>(cin), istream_iterator<Derived>(),
         back_inserter(vs));

    for (auto &el: vs)
        cout << el << ' ';
    cout << '\n';
}
