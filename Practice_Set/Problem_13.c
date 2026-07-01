//Print The Table Of A Number Input By The User 

#include <stdio.h>

int main (){
    int n;
    printf("Enter n:") ;
    scanf ("%d" , &n);

    for (int i=1 ; i<=10 ; i++){
        printf ("%d\n" , n*i);
    }
    return 0;
}