#ifndef INCLUDED_SHOWEXCEPTS_
#define INCLUDED_SHOWEXCEPTS_

class ShowExcepts
{
	void (*d_fp)();

    public:
        ShowExcepts(int value, void (*fp)());
        void asAthrowList() const ;
        void asNoexcept() const;
};
        
#endif
