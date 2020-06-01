#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argC, char *argv[])
{
  int i,n;
  n=atoi(argv[1]);
  if(fork()==0)
  {
    printf("In Child Process.....\n");
    execlp("ex651","ex651",argv[1],NULL);
  }
  else
  {
    sleep(1);
    printf("In Parent Process....\n");
    execlp("ex652","ex652",argv[1],NULL);
  }
  return 0;
}
