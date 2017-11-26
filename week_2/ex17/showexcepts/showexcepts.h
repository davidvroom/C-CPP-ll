#ifndef INCLUDED_SHOWEXCEPTS_
#define INCLUDED_SHOWEXCEPTS_


class ShowExcepts
{
    public:
        ShowExcepts(int value, void (*pf)());
        void asAthrowList();
        void asNoexcept();
};
        
#endif
