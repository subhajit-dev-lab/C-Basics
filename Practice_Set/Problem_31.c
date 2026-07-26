// Write a program in C to find the maximum number between two numbers using a pointer

#include <stdio.h>

void Find(int a, int b) ;

int main (){
    int a, b ;
    printf("Enter a: ");
    scanf ("%d", &a);
    printf("Enter b: ");
    scanf ("%d", &b);

    Find (a, b);

    return 0 ;
}
void Find(int a, int b){
    if (a > b){
        printf ("a is maximum\n");
    } else if (b > a){
        printf ("b is maximum\n");
    } else {
        printf ("a & b are equal\n");
    }
}