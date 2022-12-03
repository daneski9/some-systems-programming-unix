#include <stdlib.h>
#include <stdio.h>

int main(){
/*
    char var = 3;
    printf("%d", var<<1); //0000 0011      -->   0000 0110



    int a = 4, b = 3;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After XOR, a = %d and b = %d", a, b);

    */
unsigned char a = 0x36 >> 1;
printf ( "%d", a);
}
