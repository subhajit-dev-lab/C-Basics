// Checking Of Adult Or Non Adult
// By Using Ternary Operators

#include <stdio.h>

int main(){

    int age;

    printf ("Enter age: ");
    scanf ("%d" , &age);

    age >= 18 ? printf ("Adult \n") : printf ("Non Adult") ; // ? = check , : = otherwise

    return 0;
}

// if (age >= 18){printf ("Adult") ;} else {printf ("Non Adeult") ;}  [Alternative Methode]