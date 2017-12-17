#ifndef EX31_BASE_H
#define EX31_BASE_H

class Base
{
    public:
        Base *clone() const;

    private:
        virtual Base *newCopy() const = 0;
};

inline Base *Base::clone() const
{
    return newCopy();
}

#endif
