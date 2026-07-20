// Syntax of Pointer to Pointer

#include <stdio.h>

int main (){

    float price = 100.00 ;
    float *ptr = &price ;
    float **pptr = &ptr ;

    printf ("%f\n", **pptr) ;

    return 0 ;

}