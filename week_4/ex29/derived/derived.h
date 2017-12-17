#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../fork/fork.h"

class Derived: public Fork
{
    public:
        Derived();
        virtual ~Derived();

    private:
    	void parentProcess();
    	void childProcess();
};
        
#endif
