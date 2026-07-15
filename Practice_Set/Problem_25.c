// Write a function to convert celsius to fahrenheit [F = (C * 9/5) + 32]

#include <stdio.h>

float calculateTemp(float celsius);

int main (){

    float far = calculateTemp(0); // Since we are converting 0 degree cesius to fahrenheit, if we want to convert 'n' degree then 0=n
    printf ("Fahrenheit value is: %f" , far);
    return 0;
}

float calculateTemp(float celsius){

    float far = (celsius*9.0/5.0)+32 ;
    return far;
}