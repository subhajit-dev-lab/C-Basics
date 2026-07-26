#include <stdio.h>

int main (){
    
    int marks[3] ; // type(int, float, char etc)_name of array_number needed

    printf ("Enter phy: ") ;
    scanf ("%d", &marks[0]) ;   // 0 Based Indexing
    printf ("Enter chem: ") ;
    scanf ("%d", &marks[1]) ;  
    printf ("Enter math: ") ;
    scanf ("%d", &marks[2]) ;  

    printf ("Phy = %d , Chem = %d . Math = %d\n", marks[0],marks[1],marks[2]) ;

    return 0 ;
}

// Initialization of Array:

// int marks[] = {90, 96, 92} ;     Or      int marks[3] = {90, 96, 92} ;