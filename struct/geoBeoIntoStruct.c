#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
struct _Qs {
  char question[1000];;
  char choice1[1000];
  char choice2[1000];
  char choice3[1000];
  char choice4[1000];
  char answer[10] ;
};
struct _Qs qArray[5];
int main(){

char buf[1024];
unsigned char score = 0;
int i, j, count, value, questionNum, alreadyasked[50];
questionNum = 1;

for(i = 0; i<5; i++){
    FILE *fr = fopen("questionBank.txt", "r");
    srand(time(NULL));
    count = rand() % 50;
  if(alreadyasked[count] == 1){
      j--;
      fclose(fr);
  }
  else{
    alreadyasked[count] = 1;
    for ( j = 0; j < count*6; j++){
     fgets(buf, sizeof(buf), fr);
    }
    printf("\nQuestion: %d", questionNum);
    printf("\nCurrent score is %d\n", score);
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

    scanf("%d", &value);
    if(value = qArray[i].answer[0]){
        score++;
    }
    questionNum++;
    fclose(fr);

  }
}
    printf("Your score is %d", score);

}







