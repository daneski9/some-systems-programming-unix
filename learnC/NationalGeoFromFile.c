// Dane Coleman
// Date: 2/19/22
// Assignment: National Geographic Bee C Program
// TASK 1 :  Random number
// TASK 2 : insert while loop
// TASK 3 : Print messages

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){


char buff[1024];
int j, i, score, value, alreadyAsked[50];
//FILE *fptr = fopen("questionBank.txt", "r");

for(j = 0; j<5; j++){
    FILE *fptr = fopen("questionBank.txt", "r");
    srand(time(NULL));
    int count = rand() % 50;
    for (i = 0; i < count*6; i++){
        fgets(buff, sizeof( buff), fptr);
    }
    fgets(buff, sizeof( buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof( buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof( buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof( buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof( buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof( buff), fptr);
    scanf ( "%d", &value);
    while(getchar() != '\n');
    if(value = buff[0]){
        score++;
    }
   fclose(fptr);
 //  rewind(fptr);
}






}
