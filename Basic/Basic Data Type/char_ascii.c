#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    // 字元常數必須放在單引號裡
    char ch = 'a';
    printf("ch = %c\n", ch);    // 印出ch 字串
    printf("ASCII of ch = %d\n", ch);   // 印出ascii碼 10進位 97

    char ninety = 90;
    printf("ch = %c\n", ninety);
    
    return 0;
}
