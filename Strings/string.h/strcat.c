// Concatenates first string with second string

#include <stdio.h>
#include <string.h>

int main (){
    char firstStr[100]="Hello"; // [] must be greater than str1+str2
    char secondStr[]="World";
    
    strcat(firstStr, secondStr);
    puts(firstStr);

    return 0;
}