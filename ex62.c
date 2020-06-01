#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  printf("Transfer to execlp function\n");
  execl("/usr/bin/head","head",argv[1],argv[2],NULL);
  printf("This line will not execute\n");
  return 0;
}
