//Dane Coleman
//Extend the National Geographic bee to read questions from a file  and using curses
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
int main(){
initscr();//initialize the screen
cbreak(); //disables line buffering, making characters typed by the user immediately available to the program.
echo(); // echo my keystrokes
refresh();
char buff[1024];
unsigned char score = 0;
int i, j, count, value, questionNum;
int alreadyasked[50];
questionNum = 1;
for(j = 0; j<5; j++){
    FILE *fptr = fopen("questionBank.txt", "r");
    refresh();
    srand(time(NULL));
    count = rand() % 50;
  if(alreadyasked[count] == 1){
      j--;
      fclose(fptr);
  }
  else{  
    alreadyasked[count] = 1;
    for ( i = 0; i < count*6; i++){
     fgets(buff, sizeof(buff), fptr);
    }
    refresh();
    mvprintw(3,3, "\nQuestion: %d", questionNum);
    mvprintw(1,20,"\nCurrent score is %d\n", score);
    fgets(buff, sizeof(buff), fptr);
    move(5,3);
    printw("%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    mvprintw(6,3,"%s", buff);
    fgets(buff, sizeof(buff), fptr);
    mvprintw(7,3,"%s", buff);
    fgets(buff, sizeof(buff), fptr);
    mvprintw(8,3,"%s", buff);
    fgets(buff, sizeof(buff), fptr);
    mvprintw(9,3,"%s\n", buff);
    fgets(buff, sizeof(buff), fptr);
    refresh();
    value = getch();
    if(value == buff[0]){
      score++;
    }
    questionNum++;
    fclose(fptr);
    clear();
   }
}
    printw("Your score is %d", score);
    getch();
    endwin();


}
