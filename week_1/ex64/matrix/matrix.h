#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

class Matrix
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
    size_t d_nElements = 0;
    double *d_data = 0;
    public:
        Matrix() = default;
        Matrix(size_t nRows, size_t nCols);			                        // 1
        Matrix(std::initializer_list<std::initializer_list<double>> lists); // 2
        Matrix(Matrix const &other);                                        // 3                                        
        Matrix(Matrix &&tmp);                                               // 4
        ~Matrix();
        Matrix &operator=(Matrix const &other);                             // 1
        Matrix &operator=(Matrix &&tmp);                                    // 2
        void swap(Matrix &other);
        
        size_t nCols() const;
        size_t nRows() const;

        double const *row(size_t idx) const;    // for const double
        double *row(size_t idx);                // for non-const double

        static Matrix identity(size_t dim);
        Matrix &tr();
        Matrix transpose() const;

        void print() const;                     // moet nog weg

    private:
        bool checkLength(std::initializer_list<std::initializer_list<double>> lists);
        double *safeRow(size_t idx) const;      // private backdoor
};

inline size_t Matrix::nCols() const
{
    return d_nCols;
}

inline size_t Matrix::nRows() const
{
    return d_nRows;
}

inline double const *Matrix::row(size_t idx) const
{
    return safeRow(idx);
}

inline double *Matrix::row(size_t idx)
{
    return safeRow(idx);
}
        
#endif
