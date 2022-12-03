#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(){
/*
int x = 5, y = 3, z = 30;
x = fork();
y = fork();
if (x!=0)  printf("type 1\n");
if (y!=0)  printf("type 2\n");

z = fork();

if( (x>0) || (y>0) || (z>0))
    printf("Type 3\n");
if( (x==0) && (y==0) && (z!=0))
    printf("Type 4 \n");
if( (x!=0) && (y!=0) && (z!=0))
    printf("Type 5\n");

return 0;
*/
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;








}
