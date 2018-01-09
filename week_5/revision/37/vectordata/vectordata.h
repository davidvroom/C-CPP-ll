#ifndef EX37B_VECTORDATA_H
#define EX37B_VECTORDATA_H

#include <vector>
#include <set>

class VectorData
{
    typedef std::set<std::string>::iterator setStrIter;

    std::vector<std::string> d_data;

    public:
        VectorData(setStrIter first, setStrIter last);
        
        void add(std::string const &word);
        void swap(VectorData &other);
        size_t size() const;
        size_t capacity() const;
};

inline VectorData::VectorData(setStrIter first, setStrIter last)
:   
    d_data(first, last)
{}

inline void VectorData::add(std::string const &word)
{
    d_data.push_back(word);
}

inline void VectorData::swap(VectorData &other)
{
    d_data.swap(other.d_data);
}

inline size_t VectorData::size() const
{
    return d_data.size();
}

inline size_t VectorData::capacity() const
{
    return d_data.capacity();
}

#endif
