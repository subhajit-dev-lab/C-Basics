// Ask the user to enter their firstName and print it back to them

#include <stdio.h>

int main (){

    printf ("Enter firstname: ");

    char name[50];

    scanf ("%s", name);
    printf ("your firstname is: %s", name);

    return 0;
}