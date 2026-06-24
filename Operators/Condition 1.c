#include <stdio.h>
#include <math.h>

// Write A Program To Check If A Number Divisible By 2 Or Not

int main (){

    int x ;

    printf ("Enter Value Of x : ");
    scanf ("%d" , &x);

    printf ("%d" , x % 2 == 0); // Even = 1 & Odd = 0

    return 0;
}