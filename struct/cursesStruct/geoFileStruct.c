//Dane Coleman
//Reading questions from a file into the structure
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
struct _Qs {
  char question[1000];;
  char choice1[1000];
  char choice2[1000];
  char choice3[1000];
  char choice4[1000];
  char answer[10] ;
};
struct _Qs qArray[10];

int main(){
initscr();//initialize the screen
cbreak(); //disables line buffering, making characters typed by the user immediately available to the program.
echo(); // echo my keystrokes
refresh();
char buff[1024];
unsigned char score = 0;
int i, j, count, value, questionNum, alreadyasked[50];
questionNum = 1;

for(i = 0; i<5; i++){
    refresh();
    FILE *fptr = fopen("questionBank.txt", "r");
    srand(time(NULL));
    count = rand() % 50;
  if(alreadyasked[count] == 1){
      i--;
      fclose(fptr);
  }
  else{
    alreadyasked[count] = 1;
    for ( j = 0; j < count*6; j++){
     fgets(buff, sizeof(buff), fptr);
    }
    refresh();
    mvprintw(3,3, "\nQuestion: %d", questionNum);
    mvprintw(1,20,"\nCurrent score is %d\n", score);
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].question, buff);
    mvprintw(5,3,"%s", qArray[i].question );
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].choice1, buff);
    mvprintw(6,3,"%s", qArray[i].choice1 );
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].choice2, buff);
    mvprintw(7,3,"%s", qArray[i].choice2 );
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].choice3, buff);
    mvprintw(8,3,"%s", qArray[i].choice3 );
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].choice4, buff);
    mvprintw(9,3,"%s", qArray[i].choice4 );
    fgets   (buff, sizeof(buff), fptr);
    strcpy  (qArray[i].answer, buff);
    value = getch();
    if(value == qArray[i].answer[0]){
      score++;
    }
    questionNum++;
    fclose(fptr);
    clear();
    refresh();
   }
}
    printw("Your score is %d", score);
    getch();
    endwin();

}
