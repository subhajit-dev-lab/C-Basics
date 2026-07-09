// Write functions to calculate area of a square , a circle & a rectangle

#include <stdio.h>

float squareArea (float side);
float circleArea (float radius);
float rectangleArea (float a , float b);

int main (){
    char i ;
    printf("Enter 's' for square ; 'c' for circle ; 'r' for rectangle : ");
    scanf (" %c", &i);

    if (i=='s'){
        int x ;
        printf ("Enter Side: ");
        scanf ("%d" , &x);
        printf ("Area of The Square: %f\n", squareArea(x)) ;
    } else if (i=='c'){
        float y ;
        printf ("Enter Radius: ");
        scanf ("%f", &y);
        printf ("Area of Circle: %f\n", circleArea(y));
    } else if (i=='r'){
        int a,b ;
        printf ("Enter a: ") ;
        scanf ("%d", &a);
        printf ("Enter b: ");
        scanf ("%d", &b);
        printf ("Area of Rectangle: %f\n", rectangleArea(a,b));
    } else {
        printf ("Unknown Character!");
    }
    return 0 ;
}

float squareArea (float side){
    return side*side ;
}
float circleArea (float radius){
    return 3.14*radius*radius ;
}
float rectangleArea (float a , float b){
    return a*b ;
}