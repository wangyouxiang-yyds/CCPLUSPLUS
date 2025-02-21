/*

1.若此字元是數字(即數字0~9)，則印出"此字元是數字"字串
  若此字元是英文大小寫字母(a~z, A~Z)，則印出"此字元是英文字母"字串

2.可以判別數字是等於0的情況，可判別整數是大於0等於0小於0 ????這有問題

3.可由鍵盤輸入一個整數，然後判斷他是奇數或偶數

4.可由鍵盤輸入一整數，求絕對值
*/

#include<stdio.h>

int main()
{
    int number;
    printf("Please input a number: ");
    while(scanf("%d", &number) != EOF)
    {

        if (number % 2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
        

    }




    return 0;
}
