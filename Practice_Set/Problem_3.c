// Program To Print The Average Of Three Numbers

#include <stdio.h>

int main(){

    int a,b,c ;

    printf (" Enter a: ");
    scanf ("%d" , &a);

    printf ("Enter b: ");
    scanf ("%d" , &b);

    printf ("Enter c: ");
    scanf ("%d" , &c);

    int n;
    n = (a+b+c);

    printf ("Average: %d \n" , (n/3)); // If Avg of m numbers then (n/m)

    return 0;
}