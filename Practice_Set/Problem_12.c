// Print The Sum Of n Natural Numbers ; If n Is Given By The User & Also Print Them In Reverse

#include <stdio.h>

int main () {

    int n;
    printf ("Enter n: ") ;
    scanf ("%d", &n) ;

    int sum = 0;

    for (int i=1 ; i<=n ; i++){
        sum += i ; // which means sum = sum + i
    }
    printf ("Sum Is: %d\n" , sum) ;
    printf("Reverse Order: ");

    for (int i=n ; i>=1 ; i--) {
        printf("%d" , i);
    }
    
    return 0;
    
}

// If We Want These Two Loops In One Then : 
// for (int i=1 , j=n ; i<=n && j>=1 ; i++ , j--) {
// sum += i
// printf("%d\n" , j)}