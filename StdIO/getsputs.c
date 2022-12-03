#include <stdio.h>
int main(){

FILE *fp;
char str[50];
int fd;
fd = fopen("/test.txt", "r");
fgets(str, 10, fp);
puts(str);
fclose(fp);






}
