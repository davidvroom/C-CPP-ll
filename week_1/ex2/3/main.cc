#include "header.ih"

int main()
{
	string str;
	while (promptGet(cin, str))
        process(str);
}