#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int a;
   printf("input the second: ");
   scanf("%d",&a);
   
   printf("the time is %d : %d\n",a/60,a%60);

  
  system("PAUSE");	
  return 0;
}
