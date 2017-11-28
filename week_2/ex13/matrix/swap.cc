// The swap function satisfies the nothrow guarantee, because it uses
// only primitive type operations and the C-function memcpy.
// We add the noexcept specifier to indicate that our 
// code was not written to cope with a throw.

#include "matrix.ih"

void Matrix::swap(Matrix &other) noexcept
{
    char buffer[sizeof(Matrix)];
    memcpy(buffer, this,   sizeof(Matrix));
    memcpy(this,   &other, sizeof(Matrix));
    memcpy(&other, buffer, sizeof(Matrix));
}
