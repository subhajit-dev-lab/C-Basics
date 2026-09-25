//Difference between two integer

#include <stdio.h>

int main(){
    int num1,num2;

    printf ("Enter two numbers: ");
    scanf ("%d %d", &num1, &num2);

    if (num1>num2){
        printf ("Difference is: %d", num1-num2);
    } else if (num2>num1){
        printf ("Difference is: %d", num2-num1);
    } else {
        printf ("Equal");
    }

    return 0;
}