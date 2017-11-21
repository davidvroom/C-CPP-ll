#include "main.ih"
#include <iostream>
int main(int argc, char **argv)
{
    Strings s1{ argc, argv };
    Strings s2{ s1 };
    Strings s3;

    s3 = s1;


    std::cerr << s1.at(1) << '\n';
    std::cerr << s2.at(1) << '\n';
    std::cerr << s3.at(1) << '\n';

    bool val = s2 == s1;
    cout << val << true << '\n';


}
