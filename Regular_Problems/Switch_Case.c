// Addition,Subtraction,Multiplication & Division using switch

#include <stdio.h>

int main(){
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d", &a,&b);

    int c;
    printf ("Enter case: ");
    scanf ("%d", &c);

    switch(c){
        case 1: printf ("%d",a+b);
        break;
        case 2: printf ("%d",a-b);
        break;
        case 3: printf ("%d",a*b);
        break;
        case 4: printf ("%d",a/b);
        break;
        default: printf ("Invalid Choice\n");
    }
    return 0;
}