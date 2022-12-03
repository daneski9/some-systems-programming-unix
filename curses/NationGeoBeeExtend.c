//Dane Coleman
//Due Date: 2/26/2022
//Assignment: Use curses to extend the National Geographic Bee C Program
#include <time.h>
#include <stdlib.h>
#include <curses.h>
int main(){
initscr();//initialize the screen
cbreak(); //disables line buffering, making characters typed by the user immediately available to the program.
echo(); // echo my keystrokes
refresh();
unsigned char  score = 0;
int value, n, end, unique, questionNum, alreadyAsked[15];
end = 5;
n = 0;
unique = 0;
questionNum = 1;

while (n < end){

    srand(time(NULL)); //Initializes random number generator. NULL = number of seconds elapsed since 1970*/
    int randNum = 1 + rand() % (15);
    unique = 0; // reset boolean value
     if (randNum == 1 && alreadyAsked[1]!=1){ // 1 is the correct answer
        unique = 1;
        alreadyAsked[1] = 1;
       move(2,3);
       printw("Question %d:  Current Score %d/5\n", questionNum, score);
       mvprintw(4,3,"The neighbors of USA are \n");
       mvprintw(5,3,"1. Canada and Mexico\n");
       mvprintw(6,3,"2. United Kingdom, Russia, Mexico and North Carolina\n");
       mvprintw(7,3,"3. Brazil, Mexico, Canada\n");
       mvprintw(8,3,"4. No Neighbors\n");
       move(9,3);
       value = getch();
        if (value == 49){ //ASCII value of 1. getch() captures the ASCII value from the keyboard.
            score++;
        }
	clear();
     }
     else if (randNum == 2 && alreadyAsked[2]!=1){// 1 is the correct answer
        unique = 1;
        alreadyAsked[2] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"What is USA stands for\n");
        mvprintw(5,3,"1. United States of America\n");
        mvprintw(6,3,"2. United Stand Always\n");
        mvprintw(7,3,"3. United South Africa\n");
        mvprintw(8,3,"4. United State Employees\n");
        move(9,3);
        value = getch();
        if (value == 49){
            score++;
        }
        clear();
     }
     else if (randNum == 3 && alreadyAsked[3]!=1){// 2 is the correct answer
         unique = 1;
        alreadyAsked[3] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Where is USA\n");
        mvprintw(5,3,"1. Above Canada\n");
        mvprintw(6,3,"2. Below Canada\n");
        mvprintw(7,3,"3. Below Mexico\n");
        mvprintw(8,3,"4. Next to Texas\n");
        move(9,3);
        value = getch();
        if (value == 50){
            score++;
        }
        clear();
     }
     else if (randNum == 4 && alreadyAsked[4]!=1){ // 4 is the correct answer
        unique = 1;
        alreadyAsked[4] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Where is Canada\n");
        mvprintw(5,3,"1. Below USA\n");
        mvprintw(6,3,"2. Next to Australia\n");
        mvprintw(7,3,"3. Below Mexico\n");
        mvprintw(8,3,"4. Above USA\n");
        move(9,3);
        value = getch();
        if (value == 52){
            score++;
        }
        clear();
     }
     else if (randNum == 5 && alreadyAsked[5]!=1){// 1 is the correct answer
        unique = 1;
        alreadyAsked[5] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Where is California\n");
        mvprintw(5,3,"1. Next to Nevada\n");
        mvprintw(6,3,"2. Next to Texas\n");
        mvprintw(7,3,"3. Next to Washington DC\n");
        mvprintw(8,3,"4. Next to Washington State\n");
        move(9,3);
        value = getch();
        if (value == 49){
            score++;
        }
        clear();
     }
     else if (randNum == 6 && alreadyAsked[6]!=1){// 4 is the correct answer
        unique = 1;
        alreadyAsked[6] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Where is Nevada\n");
        mvprintw(5,3,"1. in Mexico\n");
        mvprintw(6,3,"2. Next to Texas\n");
        mvprintw(7,3,"3. Next to Las Vegas\n");
        mvprintw(8,3,"4. Next to California\n");
        move(9,3);
        value = getch();
        if (value == 52){
            score++;
        }
        clear();
     }
     else if (randNum == 7 && alreadyAsked[7]!=1){// 4 is the correct answer
        unique = 1;
        alreadyAsked[7] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"White house is in \n");
        mvprintw(5,3,"1. Canada\n");
        mvprintw(6,3,"2. California\n");
        mvprintw(7,3,"3. Next to my house\n");
        mvprintw(8,3,"4. Washington DC\n");
        move(9,3);
        value = getch();
        if (value == 52){
            score++;
        }
        clear();

     }
     else if (randNum == 8 && alreadyAsked[8]!=1){// 1 is the correct answer
        unique = 1;
        alreadyAsked[8] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"New York City is in\n");
        mvprintw(5,3,"1. New York\n");
        mvprintw(6,3,"2. Maryland\n");
        mvprintw(7,3,"3. Delaware\n");
        mvprintw(8,3,"4. New Jersey\n");
        move(9,3);
        value = getch();
        if (value == 49){
            score++;
        }
        clear();

     }
     else if (randNum == 9 && alreadyAsked[9]!=1){// 2 is the correct answer
        unique = 1;
        alreadyAsked[9] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Toronto is in\n");
        mvprintw(5,3,"1. USA\n");
        mvprintw(6,3,"2. Canada\n");
        mvprintw(7,3,"3. Mexico\n");
        mvprintw(8,3,"4. UK\n");
        move(9,3);
        value = getch();
        if (value == 50){
            score++;
        }
        clear();

     }
     else if (randNum == 10 && alreadyAsked[10]!=1){// 4 is the correct answer
        unique = 1;
        alreadyAsked[10] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"UK stands for \n");
        mvprintw(5,3,"1. Unknown\n");
        mvprintw(6,3,"2. United Kentucky\n");
        mvprintw(7,3,"3. United Kings\n");
        mvprintw(8,3,"4. United Kingdom\n");
        move(9,3);
        value = getch();
        if (value == 52){
            score++;
        }
        clear();
     }
     else if (randNum == 11 && alreadyAsked[11]!=1){// 4 is the correct answer
        unique = 1;
        alreadyAsked[11] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Kentucky is in \n");
        mvprintw(5,3,"1. Canada\n");
        mvprintw(6,3,"2. Mexico\n");
        mvprintw(7,3,"3. City in Texas\n");
        mvprintw(8,3,"4. USA\n");
        move(9,3);
        value = getch();
        if (value == 52){
            score++;
        }
        clear();
     }
     else if (randNum == 12 && alreadyAsked[12]!=1){// 2 is the correct answer
        unique = 1;
        alreadyAsked[12] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"San Diego is in\n");
        mvprintw(5,3,"1. Nevada\n");
        mvprintw(6,3,"2. California\n");
        mvprintw(7,3,"3. Utah\n");
        mvprintw(8,3,"4. Oregon\n");
        move(9,3);
        value = getch();
        if (value == 50){
            score++;
        }
        clear();
     }
     else if (randNum == 13 && alreadyAsked[13]!=1){// 3 is the correct answer
        unique = 1;
        alreadyAsked[13] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Los Angeles is in\n");
        mvprintw(5,3,"1. Texas\n");
        mvprintw(6,3,"2. Utah\n");
        mvprintw(7,3,"3. California\n");
        mvprintw(8,3,"4. Nevada\n");
        move(9,3);
        value = getch();
        if (value == 51){
            score++;
        }
        clear();
     }
     else if (randNum == 14 && alreadyAsked[14]!=1){// 2 is the correct answer
        unique = 1;
        alreadyAsked[14] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Florida is \n");
        mvprintw(5,3,"1. Next to Texas\n");
        mvprintw(6,3,"2. Next to Georgia\n");
        mvprintw(7,3,"3. Next to New York\n");
        mvprintw(8,3,"4. Next to Memphis\n");
        move(9,3);
        value = getch();
        if (value == 50){
            score++;
        }
        clear();
     }
     else if (randNum == 15 && alreadyAsked[15] != 1){ //// 1 is the correct answer
        unique = 1;
        alreadyAsked[15] = 1;
        mvprintw(2,3,"Question %d:  Current Score %d/5\n", questionNum, score);
        mvprintw(4,3,"Sierra Mountains are in \n");
        mvprintw(5,3,"1. West Coast\n");
        mvprintw(6,3,"2. Each Coast\n");
        mvprintw(7,3,"3. Sierra Lone\n");
        mvprintw(8,3,"4. Africa \n");
        move(9,3);
        value = getch();
        if (value == 49){
            score++;
        }
        clear();
     }
     n++;
     if (unique == 0){
        end++;
     }
     else{
        questionNum++;
     }
}

	if(score==5){
	move(5,5);
	printw("Your score is %d", score);
	mvprintw(6,5,"A perfect score!!!! Good job!");
	}
	else{
	mvprintw(5,5,"Your score is %d", score);
	}
	getch();
	endwin();

	return 0;
}
