// Program To Check Given Character Is Digit Or Not

#include <stdio.h>

int main(){

    int n ;

    printf ("Enter n: ");
    scanf ("%d" , &n);

    if (n >= 0 && n <= 9){
        printf("n is a digit") ;
    } else {
        printf("n is not a digit") ;
    }

    return 0 ;
}