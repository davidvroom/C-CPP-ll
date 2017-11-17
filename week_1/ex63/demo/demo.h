#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <iostream>
using namespace std;

class Demo
{
    public:
        Demo();								// default constructor
        Demo(Demo const &other);			// copy constructor
        Demo(Demo &&tmp);					// move constructor
        ~Demo();							// destructor
        Demo &operator=(Demo const &other);	// overloaded assignment operator
        Demo &operator=(Demo &&tmp);		// move assignment operator
};

inline Demo::Demo()
{
	cout << "Default constructor called\n";
}

inline Demo::Demo(Demo const &other)
{
	cout << "Copy constructor called\n";
}

inline Demo::Demo(Demo &&tmp)
{
	cout << "Move constructor called\n";
}

inline Demo::~Demo()
{
	cout << "Destructor called\n";
}

inline Demo &Demo::operator=(Demo const &other)
{
	cout << "Overloaded assignment operator called\n";
}

inline Demo &Demo::operator=(Demo &&tmp)
{
	cout << "Move assignment operator called\n";
}
        
#endif