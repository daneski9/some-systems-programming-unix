#include <stdio.h>
#include <stdlib.h>
int main(){

struct _hello{
int x;
char name[10];

};
/*
struct _hello First = {12, "Dane"};



struct _hello pArray[8], *p;

pArray[3].x = 13;
strcpy(pArray[3].name, "Jack");
p = &pArray[2];
p++;
printf("%s", (*p).name);


*/////////////////
struct _bye{
int x;
//char name[10];


} NewBye;

printf("%d", sizeof(NewBye));

typedef  struct _person

{

  int age ;

  char ch;

} Person_T ;



Person_T  p ;

Person_T  *ptr ;

ptr = &p ; // is this a valid statement























}
