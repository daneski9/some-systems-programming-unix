#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
/*
int x = 200;
int iData[] = {300, 400, 500, 600, 700};
int *iPtr1, *iPtr2;

//iPtr1 = &x;
//iPtr2 = iData;


iPtr2++;
iPtr2++;
iPtr2 = iPtr1;
printf("%d", *iPtr2);

iPtr2 = iData + 2;
iPtr1 = ++iPtr2;

printf(" %d \n", *iPtr1);

printf(" %d ", *iPtr2); */


//////////////////

/*
int *p1, *p2;
int y = 100;
p1 = &y;
p2 = p1;

y = 50;
y = 25;
printf("%d \n", *p1);
printf("%d", *p2);
*/
/*
int nameBuf[5] = {0x8, 0x12, 0xdeadbeef, 0xabcdabcd};

nameBuf[4] = 20;

printf("%d", nameBuf[4]);
*/
int numData [ 10 ] = { 19, 12, 23, 43, 87, 34 } ;
int *numPtr = numData+2;
numPtr = numPtr + 20;

printf("%d", *numPtr);






}
