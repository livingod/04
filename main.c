#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int sec;
   int hour,minute,second;
   
   printf("input the second: ");
   scanf("%d",&sec);
   
   hour = sec/3600;
   minute  = (sec%3600)/60;
   second = (sec%3600)%60;
   
   printf("The time for %d second is %d:%d:%d\n", sec, hour, minute, second);
  system("PAUSE");	
  return 0;
}
