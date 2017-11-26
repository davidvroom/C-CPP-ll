#ifndef INCLUDED_OBJECT_
#define INCLUDED_OBJECT_

#include <string>

class Object
{
	std::string d_name;

	public:
		Object(std::string const &name);		// 1
		Object(Object const &other);			// 2
		~Object();
		void hello();
};

#endif