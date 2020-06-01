#include <stdio.h>
#include <unistd.h>

int main()
{
  int pid;
  pid=fork();
  if(pid==0)
  {
    printf("In child....\n Child Id is %d Parent Id is %d\n",getpid(),getppid());
  }
  else
  {
    sleep(1);
    printf("In Parent....\n Child Id is %d Parent Id is %d\n",pid,getpid());
  }
  return 0;
}
