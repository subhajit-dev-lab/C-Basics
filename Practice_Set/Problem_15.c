// Keep taking numbers as input from user unil user enters a number which is multiple of 7

#include <stdio.h>

int main (){

    int n;
    do { printf ("Enter A Number: ");
    scanf ("%d", &n);
    printf ("%d\n" , n);

    if (n % 7 == 0) {
        break ;
    }
} while (1);
    printf ("STOP [ IT'S A MULTIPLE OF 7 ]");

    return 0;
}