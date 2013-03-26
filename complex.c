#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arg_complex.h"
#include <complex.h>

void printComplex(Complex c){
  printf("(%5.2f,%5.2f)",c.real,c.imag);
}

Complex add(Complex a,Complex b){
	Complex result = {a.real+b.real,a.imag+b.imag};
	return result;
}
Complex sub(Complex a,Complex b){
	Complex result = {a.real-b.real,a.imag-b.imag};
	return result;
}
Complex mult(Complex a,Complex b){
	Complex result = {a.real*b.real-a.imag*b.imag
			,a.real*b.imag+a.imag*b.real};
	return result;
}
Complex divC(Complex a,Complex b){
	Complex result = { (a.real*b.real+a.imag*b.imag)
			/(b.imag*b.imag+b.real*b.real)
			, (a.imag*b.real-a.real*b.imag)
			/(b.imag*b.imag+b.real*b.real)};
	return result;
}
Complex cconj(Complex a){
	Complex result ={(a.real),(a.imag*-1)};
	return result;
}
Complex real(Complex a){
	Complex result ={(a.real)};
	return result;
}
Complex imag(Complex a){
	Complex result ={(a.real*0),(a.imag)};
	return result;
}
Complex betrag(Complex a){
	Complex result ={(sqrt(pow(a.real,2))+(pow(a.imag,2)))};
	return result;
}

