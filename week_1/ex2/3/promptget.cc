#include "header.ih"

istream &promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return getline(in, str);
}
