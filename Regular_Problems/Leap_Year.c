// WAP to cheack a year is leapyear or not

#include <stdio.h>

int main(){
    int year;
    printf ("Enter Year: ");
    scanf ("%d", &year);

    if (year%4==0 && year%100!=0){
        printf ("LeapYear");
    } else if (year%400==0){
        printf ("LeapYear");
    } else {
        printf ("Not a LeapYear");
    }
    return 0;
}