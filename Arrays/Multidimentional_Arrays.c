// 3 Subject's Marks Of 2 Students [2*3 Grid]

#include <stdio.h>

int main (){
    // 2*3
    int marks [2][3];   // _ _ _ | _ _ _

    marks [0][0] = 98; // First Student's First Subject
    marks [0][1] = 95; 
    marks [0][2] = 90; 
    
    marks [1][0] = 97; // Second Student's First Subject
    marks [1][1] = 92; 
    marks [1][2] = 91; 

    printf ("%d\n", marks [0][2]);

    return 0;
}