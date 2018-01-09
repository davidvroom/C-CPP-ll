#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Derived: public string
{};

istream &operator>>(istream &istr, Derived &str)
{
    return getline(istr, str);
}

int main()
{
    vector<string> vs;

    copy(istream_iterator<Derived>(cin), istream_iterator<Derived>(),
         back_inserter(vs));
}
