/*
資料型態                型態說明    位元組                  表示範圍
long int                長整數        4             -2147483648 ~ 2147483647
int                       整數        4             -2147483648 ~ 2147483647
short int               短整數        2                  -32768 ~ 32767 
char                      字元        1                       0 ~ 255 (256個字元)
----------------------------------------------------------------------------------------
float                   浮點數        4                  1.2e-38 ~ 3.4e38
double                  倍精浮點數    8                 2.2e-308 ~ 1.8e308
----------------------------------------------------------------------------------------
unsigned long int       無號常整數    4                     0 ~ 4294967295 
unsigned int            無號整數      4                     0 ~ 4294967295
unsigned short int      無號短整數    2                     0 ~ 65535
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // 一般宣告一個整數
    int num = 15;
    // 如果需要用到更大範圍的int 可以使用
    long int num = 124000L;
    // 同時也可宣告成 int可省略
    long num = 124000L;


    // 若資料很小可利用短整數short int 來存放節省記憶體空間，因只佔2位元
    short int sum;

    // 無號整數  當資料絕對不會出現負數的時候使用
    unsigned long int;
    unsigned int;
    unsigned short int;

    return 0;
}
