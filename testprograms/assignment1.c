// Dane Coleman
// Date: 2/19/22
// Assignment: National Geographic Bee C Program
// TASK 1 :  Random number
// TASK 2 : insert while loop
// TASK 3 : Print messages
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( )
{
unsigned char  score = 0, questionNum = 1;
int alreadyAsked[15];
int value, n;
n = 0;

while (n < 5){
    srand(time(NULL)); //Initializes random number generator. NULL = number of seconds elapsed since 1970*/
    int randNum = 1 + rand() % (15);

     if (randNum == 1 && alreadyAsked[1]!=1){ // 1 is the correct answer
        alreadyAsked[1] = 1;
        printf("The neighbors of USA are \n");
        printf("1. Canada and Mexico\n");
        printf("2. United Kingdom, Russia, Mexico and North Carolina\n");
        printf("3. Brazil, Mexico, Canada\n");
        printf("4. No Neighbors\n");
        scanf ( " %d", &value);
        if (value == 1){
            score++;
        }
     }
     else if (randNum == 2 && alreadyAsked[2]!=1){// 1 is the correct answer
        alreadyAsked[2] = 1;
        printf("What is USA stands for\n");
        printf("1. United States of America\n");
        printf("2. United Stand Always\n");
        printf("3. United South Africa\n");
        printf("4. United State Employees\n");
        scanf ( " %d", &value);
        if (value == 1){
            score++;
        }
     }
     else if (randNum == 3 && alreadyAsked[3]!=1){// 2 is the correct answer
        alreadyAsked[3] = 1;
        printf("Where is USA\n");
        printf("1. Above Canada\n");
        printf("2. Below Canada\n");
        printf("3. Below Mexico\n");
        printf("4. Next to Texas\n");
        scanf ( " %d", &value);
        if (value == 2){
            score++;
        }
     }
     else if (randNum == 4 && alreadyAsked[4]!=1){ // 4 is the correct answer
        alreadyAsked[4] = 1;
        printf("Where is Canada\n");
        printf("1. Below USA\n");
        printf("2. Next to Australia\n");
        printf("3. Below Mexico\n");
        printf("4. Above USA\n");
        scanf ( " %d", &value);
        if (value == 4){
            score++;
        }
     }
     else if (randNum == 5 && alreadyAsked[5]!=1){// 1 is the correct answer
        alreadyAsked[5] = 1;
        printf("Where is California\n");
        printf("1. Next to Nevada\n");
        printf("2. Next to Texas\n");
        printf("3. Next to Washington DC\n");
        printf("4. Next to Washington State\n");
        scanf ( " %d", &value);
        if (value == 1){
            score++;
        }

     }
     else if (randNum == 6 && alreadyAsked[6]!=1){// 4 is the correct answer
        alreadyAsked[6] = 1;
        printf("Where is Nevada\n");
        printf("1. in Mexico\n");
        printf("2. Next to Texas\n");
        printf("3. Next to Las Vegas\n");
        printf("4. Next to California\n");
        scanf ( " %d", &value);
        if (value == 4){
            score++;
        }
     }
     else if (randNum == 7 && alreadyAsked[7]!=1){// 4 is the correct answer
        alreadyAsked[7] = 1;
        printf("White house is in \n");
        printf("1. Canada\n");
        printf("2. California\n");
        printf("3. Next to my house\n");
        printf("4. Washington DC\n");
        scanf ( " %d", &value);
        if (value == 4){
            score++;
        }

     }
     else if (randNum == 8 && alreadyAsked[8]!=1){// 1 is the correct answer
        alreadyAsked[8] = 1;
        printf("New York City is in\n");
        printf("1. New York\n");
        printf("2. Maryland\n");
        printf("3. Delaware\n");
        printf("4. New Jersey\n");
        scanf ( " %d", &value);
        if (value == 1){
            score++;
        }

     }
     else if (randNum == 9 && alreadyAsked[9]!=1){// 2 is the correct answer
        alreadyAsked[9] = 1;
        printf("Toronto is in\n");
        printf("1. USA\n");
        printf("2. Canada\n");
        printf("3. Mexico\n");
        printf("4. UK\n");
        scanf ( " %d", &value);
        if (value == 2){
            score++;
        }

     }
     else if (randNum == 10 && alreadyAsked[10]!=1){// 4 is the correct answer
        alreadyAsked[10] = 1;
        printf("UK stands for \n");
        printf("1. Unknown\n");
        printf("2. United Kentucky\n");
        printf("3. United Kings\n");
        printf("4. United Kingdom\n");
        scanf ( " %d", &value);
        if (value == 4){
            score++;
        }

     }
     else if (randNum == 11 && alreadyAsked[11]!=1){// 4 is the correct answer
        alreadyAsked[11] = 1;
        printf("Kentucky is in \n");
        printf("1. Canada\n");
        printf("2. Mexico\n");
        printf("3. City in Texas\n");
        printf("4. USA\n");
        scanf ( " %d", &value);
        if (value == 4){
            score++;
        }

     }
     else if (randNum == 12 && alreadyAsked[12]!=1){// 2 is the correct answer
        alreadyAsked[12] = 1;
        printf("San Diego is in\n");
        printf("1. Nevada\n");
        printf("2. California\n");
        printf("3. Utah\n");
        printf("4. Oregon\n");
        scanf ( " %d", &value);
        if (value == 2){
            score++;
        }

     }
     else if (randNum == 13 && alreadyAsked[13]!=1){// 3 is the correct answer
        alreadyAsked[13] = 1;
        printf("Los Angeles is in\n");
        printf("1. Texas\n");
        printf("2. Utah\n");
        printf("3. California\n");
        printf("4. Nevada\n");
        scanf ( " %d", &value);
        if (value == 3){
            score++;
        }

     }
     else if (randNum == 14 && alreadyAsked[14]!=1){// 2 is the correct answer
        alreadyAsked[14] = 1;
        printf("Florida is \n");
        printf("1. Next to Texas\n");
        printf("2. Next to Georgia\n");
        printf("3. Next to New York\n");
        printf("4. Next to Memphis\n");
        scanf ( " %d", &value);
        if (value == 2){
            score++;
        }

     }
     else if (alreadyAsked[15] != 1){ //randNum == 15, // 1 is the correct answer
        alreadyAsked[15] = 1;
        printf("Sierra Mountains are in \n");
        printf("1. West Coast\n");
        printf("2. Each Coast\n");
        printf("3. Sierra Lone\n");
        printf("4. Africa \n");
        scanf ( " %d", &value);
        if (value == 1){
            score++;
        }
     }
     n++;
}
printf("Your score is %d", score);

}
