// 太簡單不做 
/*
Q:試著printf印出
*
**
***
****
*****
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
   for(int i = 0; i < 5; i++)
   {
      for(int j = 0; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
   }
   system("pause");
   
   return 0;
}
