#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
  int p[2];
  char buff[25];
  pipe(p);
  if(fork()==0)
  {
    printf("Child : Writing to pipe\n");
    write(p[1],"welcome",8);
    printf("Child Exitting\n\n");
  }
  else
  {
    wait(0);
    printf("Parent : Reading from pipe\n");
    read(p[0],buff,8);
    printf("The value read is %s\n",buff);
    printf("Parent Exitting\n");
  }
  return 0;
}
