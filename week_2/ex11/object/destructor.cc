#include "object.ih"

Object::~Object()
{
	cout << "Destructed '" << d_name << "'\n";
}
