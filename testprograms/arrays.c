// TASK 1 :  Random number
// TASK 2 : insert while loop
// TASK 3 : Print messages
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( ){


    //int takes up 4 bytes each. so the size is 15 x 4.
    int alreadyAsked[15];  //alreadyAsked is a pointer to a memory location
    alreadyAsked[1] = 23;
    alreadyAsked[2] = 33;
    printf( "The size is %d\n", sizeof(alreadyAsked));  //15 * 4 = 60

    int NumberOfCells = sizeof(alreadyAsked) / sizeof(alreadyAsked[0]);  //60 / 4 = 15
    printf( "number of cells %d\n", NumberOfCells);

    /************ CHARS **************/
    char charz[13];
    charz[4] = 'c';
    printf( "The size is %d\n", sizeof(charz)); //size of the array and the number of cells is same.      size 13, cells 13

}
