// Copies values of old string to new string

#include <stdio.h>
#include <string.h>

int main (){
    char oldStr[]="Hello";
    char newStr[]="World";

    strcpy(oldStr, newStr);
    puts(oldStr);

    return 0;
}