// Write a program to check if a number prime or not
// [Prime numbers are those numbers which can be devide only by 1 and that number]

#include <stdio.h>

int main (){

    int n;
    int count = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 2){
        printf("%d is a Prime Number\n", n);
    } else {
        printf("%d is Not A Prime Number\n", n);
    }
    return 0;
}