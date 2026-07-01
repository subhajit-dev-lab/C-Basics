// Print The Sum Of n Natural Numbers ; If n Is Given By The User

#include <stdio.h>

int main () {

    int n;
    printf ("Enter n: ") ;
    scanf ("%d", &n) ;

    int sum = 0;

    for (int i=1 ; i<=n ; i++){
        sum += i ; // which means sum = sum + i
    }
    printf ("Sum Is: %d" , sum) ;
    
    return 0;
    
}