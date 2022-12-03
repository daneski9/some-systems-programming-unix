#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){


/* #1 Define a structure with a tag name  _salary with three fields :   name (32 chars),  salary as float,  gender (1 char)
    Then,   declare an array  of structures  with  2 cells  and initialize them with "john", 24000.00, M  and "Smith", 32000, F
struct _salary {
char name[32];
float salary;
char gender;
};

struct _salary ArrayOfStruct[1] = { {"john", 24000.00, 'M'}, {"Smith", 32000, 'F'} };

printf("%s", ArrayOfStruct[0].name);
*/


//#2 write a piece of code that would copy all cells from ListA to ListB provided the semester is FALL
struct _courses {
   char name[32] ;
   char semester[10] ;
}  ;
struct _courses  ListA[4] = { { "MGMT", "FALL"} , {"COMP", "SPRING"} , {"CHEM", "FALL" }, {"CONST", "FALL" } };
struct _courses ListB[4];

//printf("%d", sizeof(ListA)); = 168    (42 * 4)
int i;
int size = sizeof(ListA)/sizeof(ListA[0]);   //168 / 42
for(i = 0; i < size; i++){
    if(strcmp(ListA[i].semester, "FALL") == 0){
        strcpy(ListB[i].name, ListA[i].name);
        strcpy(ListB[i].semester, ListA[i].semester);
    }
}

printf("%s", ListB[2].semester);
/*
int sizeB = sizeof(ListB)/sizeof(ListB[0]);
for(i = 0; i <sizeB; i++){
    printf("name: %s  semester: %s \n", ListB[i].name, ListB[i].semester);


}
*/


}
