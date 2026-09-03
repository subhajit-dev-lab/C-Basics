// Ask the user to enter their Full_Name and print it back to them

#include <stdio.h>

int main(){

    printf ("Enter Your Full Name: ");

    char name[100];

    fgets (name, 100, stdin); // for printing the full name even after space
    puts (name);

    return 0;
}