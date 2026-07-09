// Write a function that prints "Namaste" if the user is Indian & "Bonjour" if the user is French

#include <stdio.h>

void indian();
void french();

int main (){
    printf ("Enter 'i' for Indian & 'f' for French: ");
    char ch;
    scanf ("%c", &ch);

    if (ch == 'i'){
        indian();
    } else {
        french();
    }
    return 0;
}

void indian(){
    printf("Namaste\n");
}
void french(){
    printf("Bonjour\n");
}