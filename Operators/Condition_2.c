#include <stdio.h>
#include <math.h>

// Check If A Number Greater Than 9 & Less Than 100
// True = 1 , False = 0

int main(){

    int x;

    printf ("Enter value of x: ");
    scanf ("%d" , &x);

    printf ("%d" , (x > 9) && (x < 100)); // 2 digit Number Or Not

    return 0;
}
