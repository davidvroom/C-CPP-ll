#include "object.ih"

Object::Object(string const &name)
:
	d_name(name)
{
	cout << "Constructed '" << d_name << "'\n";
}
