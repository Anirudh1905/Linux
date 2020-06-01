#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argC, char *argv[])
{
  int i,n;
  long f=1;
  n=atoi(argv[1]);
  for (i = 1; i <=n; i++) f=f*i;
  printf("Factorial of %d is %ld \n",n,f);
  return 0;
}
