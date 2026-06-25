// Identification Of A Day In A Week

#include <stdio.h>

int main (){

    int Day ;

    printf ("Enter Day(1-7): ");
    scanf ("%d" , &Day) ;

    switch (Day) {
        case 1 : printf ("Monday \n") ;
                break;
        case 2 : printf ("Tueaday \n");
                break;
        case 3 : printf ("Wednesday \n");
                break;
        case 4 : printf ("Thursday \n");
                break;
        case 5 : printf ("Friday \n") ;
                break;
        case 6 : printf ("Saturday \n");
                break;
        case 7 : printf ("Sunday \n");
                break;

        default : printf ("Not A Valid Day! \n");

    }

    return 0;
}

// char Day ;   
// printf ("Enter Day: ");
// scanf ("%s" , &Day);
// switch (Day) {
//        case 'm' : printf ("Monday \n") ;
//                break;
//        case 't' : printf ("Tueaday \n");
//                break;
//        case 'w' : printf ("Wednesday \n");
//                break;
//        case 'T' : printf ("Thursday \n");
//                break;
//        case 'f' : printf ("Friday \n") ;
//                break;
//        case 's' : printf ("Saturday \n");
//                break;
//        case 'S' : printf ("Sunday \n");
//                break;
//        default : printf ("Not A Valid Day! \n");}