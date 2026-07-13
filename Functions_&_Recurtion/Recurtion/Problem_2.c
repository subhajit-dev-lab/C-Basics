// Sum of first n natural numbers

#include <stdio.h>

int sum(int n);

int main (){
    int z;
    printf ("Enter n: " ) ;
    scanf ("%d" , &z);

    printf ("Sum is: %d" , sum(z)) ;

    return 0;
}

int sum (int n){
    if (n == 1){
        return 1;
    }
    int sumNm1 = sum (n-1) ;
    int sumN = sumNm1 + n ;

    return sumN ;
}