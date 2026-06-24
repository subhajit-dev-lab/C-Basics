// Program To Print The Smallest Number Of Two

#include <stdio.h>

int main(){

    int num_1 , num_2 ;

    printf ("Enter First Number: ");
    scanf ("%d" , &num_1);

    printf ("Enter Second Number: ");
    scanf ("%d" , &num_2);

    if (num_1 < num_2) {
        printf ("%d is smallest" , num_1);
    }
    else if (num_1 > num_2) {
        printf ("%d is smallest" , num_2);
    }
    else {
        printf ("Both are Equal");
    }

    return 0;
}