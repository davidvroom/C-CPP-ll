#include "handler.ih"

void shift()
{
	string str("text");
	cout << str << '\n';
	for (size_t idx = 1; idx != str.size(); ++idx)
	{
		char first = str[0];
		//str.replace(str.begin(), str.end() - 1, 
		//	 		 str.begin() + 1, str.end());
		str.erase(0,1);
		str.push_back(first);
		cout << str << '\n';

	}
}