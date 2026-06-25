//Program To Check If A Student Passed Or Failed With Grade
// Marks > 30 Is Pass & <=30 Is Fail

#include <stdio.h>

int main (){

    int marks;

    printf ("Enter Marks(1-100): ");
    scanf ("%d" , &marks);

    if (marks > 30){
        printf ("Pass \n") ;
        if ( marks > 90){printf ("Grade A+ \n");}
       
        else if ( marks >= 80 && marks < 90){printf ("Grade A \n");}
        else if ( marks >= 70 && marks < 80){printf ("Grade B+ \n");}
        else if ( marks >= 60 && marks < 70){printf ("Grade B \n");}
        else if ( marks >= 50 && marks < 60){printf ("Grade C+ \n");}
        else if ( marks >= 40 && marks < 50){printf ("Grade C \n");}
     } 
        else { printf ("Fail \n");}
   
    return 0;
}
