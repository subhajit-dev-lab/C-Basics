// Make a programe that inputs user's name & print its length

#include <stdio.h>

int count_Length (char arr[]);

int main (){

    printf ("Enter Name: ");

    char name[100];
    fgets (name, 100, stdin);
    printf ("Length is: %d", count_Length(name));

    return 0;
}

int count_Length (char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}