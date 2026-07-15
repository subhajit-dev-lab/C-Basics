// Print exact the 4*5 grid of asterisks(*)

#include <stdio.h>

int main(){
    // Outer loop controls the rows (4 rows in total)
    for (int i=0; i < 4; i++){

        // Inner loop controls the columns (5 columns per row)
        for (int j=0; j < 5; j++){

            printf ("*");
        }
        printf ("\n");
        
    }
        return 0;
}