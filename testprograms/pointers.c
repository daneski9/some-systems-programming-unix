#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

    int *p; //pointers store addresses
    int x = 70;

    p = &x;

    printf("address of x is %d\n", &x);
    printf("address of x is %d\n", p);
    printf("value of x is %d\n", *p);
    ///////////////////////
    int y = 35;
    int *q;
    q = &y;
    printf("\naddress of y = %d\n", q);
    printf("value of y is %d\n", *q);
    *p = *q;
    printf("value of x is now %d\n", *p);
    printf("address of x is still %d\n", p);

    ////////////
    printf("\nARRAYS\n");
    int myArray[4] = {4,2,1,6};
    int *j = myArray;
    printf("address: %d\n", j);
    printf("value: %d\n", *j);
    j++;
    printf("value: %d\n", *j);

}
