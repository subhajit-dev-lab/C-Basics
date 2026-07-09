// Calculate Price of a product with 18% GST

#include <stdio.h>

void calculatePrice(float i);

int main (){
     float i;
    printf ("Enter Price: ");
    scanf ("%f", &i);

    calculatePrice(i);

    return 0;
}
void calculatePrice(float i){
    i = i + (i*0.18);
    printf ("Final Price %f\n", i);
}