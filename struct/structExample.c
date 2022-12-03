#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct _Qs {
  char  question[1000];;
  char choice1[1000];
  char choice2[1000];
  char choice3[1000];
  char choice4[1000];
  char answer[3] ;
};
struct _Qs qArray[50];
int main ( )
{
 char buf[1024];
 FILE *fr = fopen ( "questionBank.txt", "r");
 int i;
 for ( i = 0 ; i < 50; i++)  {
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].question, buf);
    printf ( "%s", qArray[i].question );
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].choice1, buf);
    printf ( "%s", qArray[i].choice1 );
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].choice2, buf);
    printf ( "%s", qArray[i].choice2 );
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].choice3, buf);
    printf ( "%s", qArray[i].choice3 );
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].choice4, buf);
    printf ( "%s", qArray[i].choice4 );
    fgets ( buf, sizeof ( buf) , fr);
    strcpy  ( qArray[i].answer, buf);
    printf ( "%s", qArray[i].answer );
 }
 fclose (fr);
 /*
  for ( i = 0 ; i < 50; i++ ) {
   printf ( "%d\n", i);
   printf ( "%s", qArray[i].question );
   printf ( "%s", qArray[i].choice1 );
   printf ( "%s", qArray[i].choice2 );
   printf ( "%s", qArray[i].choice3 );
   printf ( "%s", qArray[i].choice4 );
   printf ( "%s", qArray[i].answer );
 }
 */
}
