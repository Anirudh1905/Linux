#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
  int rfd,wfd;
  char buff[25];
  mkfifo("fif1",O_CREAT|0644);
  if(fork()==0)
  {
    printf("Child : Writing into fifo\n");
    wfd=open("fif1",O_WRONLY);
    write(wfd,"Hello",6);
  }
  else
  {
    rfd=open("fif1",O_RDONLY);
    read(rfd,buff,6);
    printf("The Parent reads %s\n",buff);
  }
  return 0;
}
