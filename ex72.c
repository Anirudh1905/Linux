#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
  int p[2];
  pipe(p);
  if(fork()==0)
  {
    close(1);
    dup(p[1]);
    close(p[0]);
    execlp("ls","ls","-l",(char *)0);
  }
  else
  {
    close(0);
    dup(p[0]);
    close(p[1]);
    execlp("wc","wc","-l",(char *)0);
  }
  return 0;
}
