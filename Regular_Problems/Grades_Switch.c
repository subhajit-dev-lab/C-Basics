// WAP to display the grade of a student based on marks

#include <stdio.h>
int main(){

    int marks;
    printf ("Enter marks (0-100): ");
    scanf ("%d", &marks);

    switch (marks){
        case 90 ... 100:
        printf ("Grade: A\n");
        break;
        case 75 ... 89:
        printf ("Grade: B\n");
        break;
        case 60 ... 74:
        printf ("Grade: C\n");
        break;
        case 40 ... 59:
        printf ("Grade: D\n");
        break;
        case 0 ... 39:
        printf ("Grade: E\n");
        break;
        default: printf ("Invalid marks!\n");
        break;
    }
    return 0;
}