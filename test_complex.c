Name        : test_arg_complex.c
 Author      : ermin
 Version     :
 Copyright   : MYNE
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arg_complex.h"


int main(int argc, char* argv[]){

  Complex c1={ 3,-7};
	Complex c2={ 2, 5};

	printf("Eingabe der Zahlen");
	printComplex(c1);
	printf("\n");
	printComplex(c2);
	printf("\n");

	printf("Addition");
	printComplex(add(c1,c2));
	printf("\n");
	printf("Subtraktion");
	printf("\n");
	printComplex(sub(c1,c2));
	printf("\n");
	printf("Multiplikation");
	printf("\n");
	printComplex(mult(c1,c2));
	printf("\n");
	printf("Division");
	printf("\n");
	printComplex(divC(c1,c2));
	printf("\n");
	printf("Komplex konjugiert");
	printComplex(cconj(c1));
	printf("\n");
	printf("Realteil");
	printComplex(real(c1));
	printf("\n");
	printf("Imagteil");
	printComplex(imag(c1));



	return 0;
}
