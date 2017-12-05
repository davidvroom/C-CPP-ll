#include "main.ih"

string *factory(string const &str, size_t count)
{
	static string inputStr = str;		// made static s.t. Xstr has access

	class Xstr: public string
	{

		public:
			Xstr()
			:
				string(inputStr)
			{}
	};

	return new Xstr[count];
}