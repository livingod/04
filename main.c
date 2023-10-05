#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int y;
   
   printf("input the year: ");
   scanf("%d",&y);
   
   if ((y%4 == 0&&y%100 != 0)||(y%400 == 0))
      printf("is the year %d the leap year?: %d\n",y,1);
   else printf("is the year %d the leap year?: %d\n",y,0);

  
  system("PAUSE");	
  return 0;
}
