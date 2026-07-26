#include <stdio.h>

int main (){
    int age = 22;
    int *ptr = &age;

    printf("ptr = %u\n", ptr);
    ptr++ ;     // Since it's a int value it will increase by 4 [int = 4 bytes]
    printf("ptr = %u\n", ptr);

    return 0;
}