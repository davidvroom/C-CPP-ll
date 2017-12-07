#include "main.ih"

int main()
{
	string str = "test";
	size_t count = 3;
	string *sp = factory(str, count);
	for (size_t idx = 0; idx != count; ++idx)
		cout << sp[idx] << '\n';
}