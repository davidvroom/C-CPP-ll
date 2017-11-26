#include "matrix.ih"

Matrix::Matrix(IniList iniList)
try
:
    d_nRows(iniList.size()),
    d_nCols(iniList.begin()->size()),
    d_data(0)
{
    d_data = new double[size()];
    auto ptr = d_data;
    for (auto &list: iniList)
    {
        if (list.size() != d_nCols)
            throw "Matrix(IniList): varying number of elements in rows";
        
        memcpy(ptr, &*list.begin() , list.size() * sizeof(double));
        ptr += list.size();
    }
}
catch (char const *message)
{
    cerr << "Exception: " << message << '\n'; 
    delete[] d_data;
}
catch (...)
{
    cerr << "Memory allocation failed\n"; 
    delete[] d_data;
}
