// Write a program to enter price of three items & print their final cost with GST

#include <stdio.h>

int main (){

    float price[3];

    printf ("Enter Prices: ");
    scanf ("%f", &price[0]);
    scanf ("%f", &price[1]);
    scanf ("%f", &price[2]);

    printf ("Total Price_1 = %f\n", price[0]+(0.18*price[0]));
    printf ("Total Price_2 = %f\n", price[1]+(0.18*price[1]));
    printf ("Total Price_3 = %f\n", price[2]+(0.18*price[2]));

    return 0;
}