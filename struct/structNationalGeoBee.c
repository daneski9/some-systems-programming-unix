#include <stdio.h>
#include <stdlib.h>
int main(){

struct _user {           //_user = tag
char name[12];
int age;
} user1 = {"Dane", 12};   //can define variable here (user1), and can initialize  //memory 16 bytes user1

struct _user user2;      //struct _user  is a type to declare new struct variables.
user2.age = 12;
user2.name[0] = "Jack"; //doesn't work
strcpy(user2.name, "Jack"); //need to do this one
printf("%d", user2.age);

int size = sizeof(struct _user);
printf("\nsize: %d\n", size);

/*SIZE OF STRUCTURE*/ //int size = sizeof(struct _user);
////////
//STRUCTURE COMPARISON//
struct _user user3;
user3 = user2;         //user3.age = user2.age
//CANNOT DO if(user2 == user3)
///////
//PASSING STRUCTURES TO FUNCTIONS

void ageIncrease (struct _user *p){  //PASS BY REFERENCE
   // (*p).age++;
     p->age++;;  //alternate definition
}
void printStruct(struct _user p){ //PASS BY VALUE
    printf("printStruct. name: %s age: %d", p.name, p.age);
}
ageIncrease(&user2);
printf("\nage increase: %d\n", user2.age);

printStruct(user2);

////////
//ARRAY OF STRUCTURES


struct _data {
  int age;
  char name[4];
};
int i;
struct _data *ptr, dataArray[3] = {21, "Dane", 30, "Jack", 20, "Kate"}; //initialize all 3 structures

ptr = dataArray;
printf("\nsize is %d\n", sizeof(dataArray));

for(i = 0; i<3; i++){
    printf("%d %s \n", ptr->age, ptr->name);
    ptr++;
}

printf("%s", dataArray[2].name);















void swap(struct _user u){



}









}
