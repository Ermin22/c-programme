#ifndef COMPLEX_H__
#define COMPLEX_H__
#include <complex.h>

typedef struct{
double real;
double imag;
} Complex;

void printComplex(Complex c);

 Complex add(Complex a,Complex b);
 Complex sub(Complex a,Complex b);
 Complex mult(Complex a,Complex b);
 Complex divC(Complex a,Complex b);
 Complex cconj(Complex a);
 Complex real(Complex a);
 Complex imag(Complex a);
 Complex betrag(Complex a);


#endif
