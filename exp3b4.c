#include <stdio.h>
#include <unistd.h>

int main()
{
  int oddsum=0,evensum=0,i,pid,n;
  printf("Enter n value: ");
  scanf("%d",&n);
  pid=fork();
  if(pid==0)
  {
    for(i=1;i<=n;i+=2)
      oddsum+=i;
    printf("Sum of odd %d\n",oddsum);
  }
  else
  {
    for(i=0;i<=n;i+=2)
      evensum+=i;
    printf("Sum of odd %d\n",evensum);
  }
  return 0;
}
