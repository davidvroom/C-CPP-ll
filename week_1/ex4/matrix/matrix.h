#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

class Matrix
{
    size_t d_nRows = 0;
    size_t d_nCols = 0;
    double *d_data = 0;                     // in fact R x C matrix

    public:
        typedef std::initializer_list<
            std::initializer_list<double>> IniList;

        Matrix() = default;
        Matrix(size_t nRows, size_t nCols);         // 1
        Matrix(Matrix const &other);                // 2
        Matrix(Matrix &&tmp);                       // 3
        Matrix(IniList inilist);                    // 4

        ~Matrix();

        Matrix &operator=(Matrix const &rhs);
        Matrix &operator=(Matrix &&tmp);

        size_t nRows() const;
        size_t nCols() const;
        size_t size() const;            // nRows * nCols

        static Matrix identity(size_t dim);

        Matrix &tr();                   // transpose (must be square)
        Matrix transpose() const;       // any dim.

        void swap(Matrix &other);

            // exercise 3
            // ==========
        double *operator[](size_t index);
        double *operator[](size_t index) const;

            // exercise 4
            // ==========
        friend Matrix operator+(Matrix const &lhs, Matrix const &rhs);
        friend Matrix operator+(Matrix &&lhs, Matrix const &rhs);
        Matrix &operator+=(Matrix const &other) &;      // 1
        Matrix operator+=(Matrix const &other) &&;      // 2

    private:
        double &el(size_t row, size_t col) const;
        void transpose(double *dest) const;

            // exercise 3
            // ==========               // private backdoor
        double *operatorIndex(size_t index) const;

            // exercise 4
            // ==========
        void add(Matrix const &rhs); 
};

inline size_t Matrix::nCols() const
{
    return d_nCols;
}

inline size_t Matrix::nRows() const
{
    return d_nRows;
}

inline size_t Matrix::size() const
{
    return d_nRows * d_nCols;
}

inline double &Matrix::el(size_t row, size_t col) const
{
    return d_data[row * d_nCols + col];
}

    // exercise 3
    // ==========
inline double *Matrix::operatorIndex(size_t index) const
{
    return d_data + index * d_nCols;
}

inline double *Matrix::operator[](size_t index)
{
    return operatorIndex(index);
}

inline double *Matrix::operator[](size_t index) const
{
    return operatorIndex(index);
}

    // exercise 4
    // ==========
//Matrix operator+(Matrix const &lhs, Matrix const &rhs);     // 1
//Matrix operator+(Matrix &&lhs, Matrix const &rhs);          // 2

#endif
