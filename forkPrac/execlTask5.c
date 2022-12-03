//Dane Coleman
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(void){

pid_t pid = fork();
int status;
if(pid == 0){
 execlp("./sum.sh", "sum.sh", "31", "5", "2", (char *) NULL);

}
else{
 wait (pid, &status);
 printf("Thank you"); 

}


}



