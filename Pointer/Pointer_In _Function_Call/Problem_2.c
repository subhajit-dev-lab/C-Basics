// Write a function to calculate the sum, product & average of two numbers. Print that average in the main function.

#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg) ;

int main (){
    int a = 5 , b = 3 ;
    int sum, prod, avg ;
    doWork (a, b, &sum, &prod, &avg) ;

    printf ("sum is %d, prod is %d, avg is %d\n", sum, prod, avg) ;
    return 0 ;
}
void doWork(int a, int b, int *sum, int *prod, int *avg){      // a, b [call by value] & sum, prod, avg [call by reference]
    *sum = a+b ;
    *prod = a*b ;
    *avg = (a+b)/2 ;
}