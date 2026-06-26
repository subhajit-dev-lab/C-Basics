// Write A Program To Check If The Given Number Is A Natural Number

// [ Natural Numbers Start From 1 ]

#include <stdio.h>

int main () {

    int n;

    printf ("Enter Number : ");
    scanf ("%d" , &n);

    if ( n >= 1) {
        printf ("%d Is A Natural Number" , n) ;
    } else {
        printf ("%d Is Not A Natural Number" , n) ;
    }
    
    return 0;
}