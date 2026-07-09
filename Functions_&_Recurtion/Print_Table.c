#include <stdio.h>

void printTable(int n);

int main (){
    int n;
    printf ("Enter Number : ");
    scanf ("%d", &n);

    printTable(n) ; // argument / Actual parameter

    return 0;
}
void printTable(int n){  // Parameter / Formal parameter
    for (int i=1 ; i<=10 ; i++){
        printf ("%d\n" ,i*n);
    }
}