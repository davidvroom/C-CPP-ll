#include "object.ih"

Object::Object(Object const &other)
:
	d_name(other.d_name + " (copy)")
{
	cout << "Copy constructed '" << d_name << "'\n";
}