/*

1.若此字元是數字(即數字0~9)，則印出"此字元是數字"字串
  若此字元是英文大小寫字母(a~z, A~Z)，則印出"此字元是英文字母"字串

2.可以判別數字是等於0的情況，可判別整數是大於0等於0小於0 ????這有問題

3.可由鍵盤輸入一個整數，然後判斷他是奇數或偶數

4.可由鍵盤輸入一整數，求絕對值
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Please input a char: ");
    while(scanf(" %c", &ch) != EOF)
    {

        int ascii_num = ch;
        printf("ascii_num:%d \n", ascii_num);

        if ((ascii_num >= 65 && ascii_num <= 90) || ascii_num >= 97 && ascii_num <= 122)
        {
            printf("This ia A~Z or a~z\n");
        }
        else if (ascii_num >= 48 && ascii_num <= 57)
        {
            printf("This ia number\n");
            
            int num = ascii_num - 48;
            if (num == 0) {
                printf("Num is equal 0\n");
            } else {
                printf("Num is greater than 0\n");
            } 
        }
        

    }




    return 0;
}
