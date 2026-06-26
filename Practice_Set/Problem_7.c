// Write A Program To Find If A Character Entered By User Is Upper Case Or Not

// Upper Case (A,B,C ....)  &  Lower Case (a,b,c ....)

#include <stdio.h>

int main (){

    char ch ;

    printf ("Enter Character : ");
    scanf ("%c" , &ch);

    if (ch >= 'A' && ch <= 'Z') {  //Every Character Has A Different ASCII Value (A=65) , ch >= 'A' & ch >= 65 Is Same
        printf ("Upper Case Character"); 
    } else if (ch >= 'a' && ch <= 'z') {
        printf ("Lower Case Character");
    } else {
        printf ("Not A English Letter");
    }
        return 0 ;
}