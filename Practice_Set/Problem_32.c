// Write a program in C to print all the letters in english alphabet using a pointer

#include <stdio.h>

int main (){
    char ch;
    char *ptr = &ch;

    printf ("English Alphabet (A-Z):\n");

    for (*ptr = 'A' ; *ptr <= 'Z' ; (*ptr)++){
        printf ("%c ", *ptr);
    }
    return 0;
}