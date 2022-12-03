//Dane Coleman
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int count = 10;


void main(void )
{


pid_t pid = vfork();


if(pid == 0){

   count++;
   exit(0);

}
else{

  printf("count: %d", count);
  printf("\nid: %d", getpid());

	
}







}
