// Create a 2D array, storing the table of 2 & 3

#include <stdio.h>

void storeTables(int arr [][10], int n, int m, int number);

int main (){
    int tables[2][10];
    storeTables (tables, 0, 10, 2);
    printf ("\n");
    storeTables (tables, 1, 10, 3);

    return 0;
}

void storeTables(int arr [][10], int n, int m, int number){
    for (int i = 0; i<m; i++){
        arr [n][i] = number * (i+1);

        printf ("%d\t", arr[n][i]);
    }
}