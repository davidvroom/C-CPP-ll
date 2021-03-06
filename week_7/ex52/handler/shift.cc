#include "handler.ih"

void Handler::shift(ostream &out, string const &text, mutex &mut)
{
	lock_guard<mutex> lg(mut);

	string str(text);
	out << str << '\n';

	for (size_t idx = 1; idx != str.size(); ++idx)
	{
		char first = str[0];
		str.erase(0,1);
		str.push_back(first);
		out << str << '\n';
	}
}