// Write a program to calculate percentage of a student from marks in science, math & sanskrit

#include <stdio.h>

int calcPercentage (int math, int science, int sanskrit);

int main(){
    int m = 96;
    int sc = 95;
    int san = 93;

    printf ("Percentage is: %d" , calcPercentage(m, sc, san));

    return 0;
}

int calcPercentage (int math, int science, int sanskrit){
    return ((math+science+sanskrit)/3); // Not multiplied with 100 because the gained marks are alredy out of 100
}