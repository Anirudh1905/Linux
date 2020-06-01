#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argC, char *argv[])
{
  int i,n;
  long s=0;
  n=atoi(argv[1]);
  for (i = 1; i <=n; i++) s=s+i;
  printf("Sum of 1 to %d is %ld \n",n,s);
  return 0;
}
