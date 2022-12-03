#include <stdio.h>
int x = 20;

int main(void) {
int x = 5;
do
{
   x++;
   x=40;
} while ( 1 == 0 && 1 == 1 );

printf ( "x=%d\n", x);

return 0;
}
