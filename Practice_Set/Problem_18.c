// Print a factorial of a number n

#include <stdio.h>

int main(){

    int n;
    printf ("Enter A Number: ");
    scanf ("%d" , &n);

    int fact=1;
    for (int i=1 ; i<=n ; i++){
        fact=fact*i ;
    }
    printf ("Factorial Is %d" , fact);

    return 0;

}