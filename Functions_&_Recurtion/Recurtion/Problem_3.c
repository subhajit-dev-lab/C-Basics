// Factorial of n

#include <stdio.h>

int fact (int n);

int main (){
    int z;
    printf ("Enter n: ");
    scanf ("%d" , &z);

    printf ("Factorial is: %d" , fact (z));

    return 0;
}

int fact (int n){
    if (n == 1){
        return 1 ;
    }
    int factnM1 = fact(n-1) ;
    int factn = factnM1 * n ;

}