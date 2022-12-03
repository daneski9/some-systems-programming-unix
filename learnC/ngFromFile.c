#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

char buff[1024];
memset(buff, 0, sizeof(buff));
FILE *fptr = fopen("questionBank.txt", "r");

unsigned char score = 0;
int i, j, count, value, questionNum;
int alreadyasked[50];
for(j = 0; j<5; j++){
srand(time(NULL));
count = rand() % 50;
 for ( i = 0; i < count*6; i++){
    fgets(buff, sizeof(buff), fptr);
 }
    printf("\nCurrent score is %d\n", score);
    fgets(buff, sizeof(buff), fptr);
    printf("\n%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    printf("%s\n", buff);
    fgets(buff, sizeof(buff), fptr);

   /* if(value == buff[0]){
      score++;
    } */

}
    fclose(fptr);
    printf("Your score is %d", score);


}
