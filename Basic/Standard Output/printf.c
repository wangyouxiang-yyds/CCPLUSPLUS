#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 25;
    printf("\"%d%%厩ネㄓ眃產畑\"\n", num);




    int num1 = 32, num2 = 1024;
    float num3 = 12.3478f;
    printf("num1 = %6dそń\n", num1);
    printf("num2 = %-6dそń\n", num2);
    printf("num3 = %6.2fそń\n", num3);
    printf("num3 = %+6.2fそń\n", num3);
    /*
        %6d => 计翴Τせ(6计)
        %-6d => 计翴Τせ(6计)  綼オ
        %6.2f => 计翴Τせ(6计) 计翴ㄢ
        %+6.2f => 计翴Τせ(6计)  计翴ㄢ ㎝计タ璽腹陪ボㄓ
    */


    int demo1 = 12345;
    float demo2 = 123.456;

    printf("%10d\n", demo1);
    printf("%+d\n", demo1);
    printf("%09d\n", demo1);
    printf("%-10d\n", demo1);
    printf("% d\n", demo1);
    printf("%7.2f\n", demo2);
    printf("%010.3f\n", demo2);
    printf("%+10.4f\n", demo2);
    


    return 0;
}
