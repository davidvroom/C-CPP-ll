#ifndef INCLUDED_FORK_
#define INCLUDED_FORK_

#include <unistd.h>

class Fork
{
	pid_t d_pid;

    public:
        Fork() = default;
        Fork(Fork const &other) = delete;
        Fork(Fork &&tmp) = delete;
        virtual ~Fork();

        void fork();

    protected:
    	pid_t pid() const;
    	int waitForChild() const;

    private:
    	virtual void parentProcess() = 0;
    	virtual void childProcess() = 0;
};
        
inline pid_t Fork::pid() const
{
	return d_pid;
}

#endif
