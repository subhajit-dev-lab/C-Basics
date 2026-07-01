// Print The Numbers From 0 To n By Using While Loop, If n Is Given By The User

#include <stdio.h>

int main(){

    int n;
    printf ("Enter n: ");
    scanf ("%d", &n);

    int i=0; // Because The Starting Number Is 0

    while (i<=n){
        printf ("%d \n", i); 
        i++;
    }


    // for (int i=0 ; i<=n ; i++) {    // If We Use for Loop
    // printf ("%d\n", i) ;
    // }  
    return 0;
}