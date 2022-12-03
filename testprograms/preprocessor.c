#include <stdio.h>
int main(){
#define COUNT 10  //DO NOT use semicolon. semi colon would change the meaning to 10; not just 10
#define ADD (x+y) //use parenthesis to avoid z = ADD * Z -> x+y*z , we would (x+y)*z
//A caution about using this constant,  you always define at the start of the program/file.If you define at the middle of the program,  they only take effect from the middle of the program.

//FUNCTION-like macros:
#define FIND_MAX(A,B,z) if (A<B)z=B; else z=A;
////////
//Conditional Macros: Sometimes, you want to compile a piece of code only when a condition is met.
#if 0
#define NUM 10  //the processor does not include this first definition because it is set to include when it is 0. 0 is always false in C.
#else
#define NUM 1000
#endif
//////
//#line 30 would instruct the compiler to start using line numbers from 30.
    int a = 10, b = 20, c = 30;
    #ifdef TERNARY_OPERATOR
    //c = (a < b) ? printf ("a < b\n") : printf ( "a > b\n") ;
    c = (a < b) ? a : b ;
    #endif
    printf ("c=%d\n", c) ;
    // runs if we compile with gcc -D TERNARY_OPERATOR file.c

        basicStuff();
        macroTest();
}
void basicStuff(){

    int x = 3;
    int y = 6;
    int z = 2;
    z = ADD * z;
    printf("Hello CodeBlocks! %d \n", z );
}
void macroTest(){
    int z;
    FIND_MAX(13,11, z);
    printf("max is %d", z);
}
