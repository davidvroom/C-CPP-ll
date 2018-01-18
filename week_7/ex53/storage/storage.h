#ifndef INCLUDED_STORAGE_H
#define INCLUDED_STORAGE_H

#include <queue>
#include <mutex>
#include <string>

class Storage
{
	std::queue<std::string> d_queue;
	std::mutex d_mutex;
	bool d_finished = false;

	public: 
		void push(std::string &line);
		std::string &front();
		void pop();
		bool empty() const;
		bool finished() const;
		void setFinished();
};

#endif
