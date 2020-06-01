#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(int argc,char *argv[])
{
  int shmid;
  char *str;
  shmid=shmget((key_t)6,1024,IPC_CREAT|0666);
  str=(char *)shmat(shmid,(char *)0,0);
  printf("Enter Data : ");
  fgets(str,sizeof(str),stdin);
  printf("Data successfully written into memory \n");
  shmdt(str);
  return 0;
}
