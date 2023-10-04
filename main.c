#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int a,b;
   printf("input two numbers: ");
   scanf("%i %i",&a,&b);
   
   printf("+ result is %d\n",a+b);
   printf("- result is %d\n",a-b);
   printf("* result is %d\n",a*b);
   printf("/ result is %d\n",a/b);
   printf("%% result is %d\n",a%b);


  
  system("PAUSE");	
  return 0;
}
