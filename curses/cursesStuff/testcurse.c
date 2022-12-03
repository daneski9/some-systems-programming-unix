#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

char buff[1024];

FILE *fptr = fopen("questionBank.txt", "r");


int i, j, count;

//for(j = 0; j<5; j++){
srand(time(NULL));
count = rand() % 50;
for ( i = 0; i < count*6; i++){
    fgets(buff, sizeof(buff), fptr);
}
fgets(buff, sizeof(buff), fptr);
printf("%s\n", buff);
fgets(buff, sizeof(buff), fptr);
printf("%s", buff);
fgets(buff, sizeof(buff), fptr);
printf("%s", buff);
fgets(buff, sizeof(buff), fptr);
printf("%s", buff);
fgets(buff, sizeof(buff), fptr);
printf("%s\n", buff);
fgets(buff, sizeof(buff), fptr);
printf("%s\n", buff);


//}


}
