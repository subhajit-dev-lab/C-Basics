// Compares 2 strings and returns a value
// 0=Equal Str ; +ve=firstStr>SecondStr ; -ve=firstStr<SecondStr

#include <stdio.h>
#include <string.h>

int main(){
    char firstStr[]="Apple";
    char secStr[]="Banana";

    printf ("%d", strcmp(firstStr, secStr));

    return 0;
}