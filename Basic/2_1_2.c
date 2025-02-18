#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   int i = 5;
   printf("%d + %d = %d\n", i, i, i + i);
   system("pause");
   return 0;
}
// 把第四行的int 改成void 會出現錯誤 因為她return是空值