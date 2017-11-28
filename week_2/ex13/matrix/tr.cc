// This function offers the strong guarantee. 
// The data is only modified if no exception is thrown by
// the preceding operations/checks

#include "matrix.ih"

Matrix &Matrix::tr()
{
    double *dest = 0;               // RAII
    try
    {
        if (d_nRows != d_nCols)
            throw "Matrix::tr requires square matrix";
        
        dest = new double[size()];
        transpose(dest);
        delete[] d_data;
        d_data = dest;
        return *this;
    }
    catch (char const *message)
    {
        cerr << "Exception: " << message << '\n';
        throw;
    }
    catch (...)
    {
        delete[] dest;
        cerr << "Could not make transpose\n";
        throw;
    }
}

