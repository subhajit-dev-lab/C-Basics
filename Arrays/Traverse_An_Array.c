#include <stdio.h>

int main (){

    int aadhar[5];

// Input
    int *ptr = &aadhar[0];
    for (int i=0; i<5; i++){
        printf ("Index %d: ", i);
        scanf ("%d", &aadhar[i]);       // We can also take (ptr+i)
    }
// Output
    for (int i=0; i<5; i++){
        printf ("Index %d = %d\n", i, aadhar[i]);   // We can also take (ptr+i)
    }
    return 0;
}   