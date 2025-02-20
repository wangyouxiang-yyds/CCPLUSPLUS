#include<stdio.h>



int main(int argc, char const *argv[])
{
    int a, b;
    // 一般輸入
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    
    // 如中間有逗號，輸入逗號來區隔
    scanf("%d,%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    // 輸入字元，需用%c
    char ch;
    scanf(" %c", &ch);  // 需刻意隔一個空白，否則會讀到空白而無法輸入
    printf("ch = %c , ascii code is %d\n", ch, ch);

    char name[10];  
    scanf("%s", name);  // 如果是陣列不需要加上&
    printf("Hi %s How are you?\n", name);


    //---------------------------------------------------------------------------------

    /*清除緩衝區的資料 */

    // fflush
    int num;
    char ch2;
    printf("輸入一個整數:");
    scanf("%d", &num);
    fflush(stdin);
    printf("輸入一字元:");
    scanf("%c", &ch2);
    printf("num=%d ASCII of ch = %d\n", num, ch2);





    return 0;
}
