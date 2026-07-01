// Keep taking numbers as input from the user until user enters an odd number

#include <stdio.h>

int main (){

    int n;
    do {printf ("Enter n: ");
        scanf ("%d" , &n);
        printf ("%d\n" , n);

        if (n % 2 != 0) {
            break;
        }

    } while (1) ;
        printf ("STOP [YOU ENTERED AN ODD NUMBER]");

        return 0;

}