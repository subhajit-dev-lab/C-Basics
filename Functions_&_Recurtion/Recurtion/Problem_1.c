// Print "Hello World" 5 Times

#include <stdio.h>

void printHW(int count);

int main (){
    printHW(5) ; // Since we have to print 5 times
    
    return 0 ;
}

//Recursive Function
void printHW(int count){  
    if (count == 0){
        return;
    }
    printf ("HelloWorld \n");
    printHW (count-1);

}