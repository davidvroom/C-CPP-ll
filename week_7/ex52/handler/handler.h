#ifndef INCLUDED_HANDLER_H
#define INCLUDED_HANDLER_H

#include <ostream>
#include <string>
#include <mutex>

class Handler
{
	public:
		void shift(std::ostream &out, std::string const &text, 
				   std::mutex &mut) const;
};

#endif