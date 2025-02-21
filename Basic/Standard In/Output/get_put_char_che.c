#include<stdio.h>
#include<conio.h>  // 需include 才可使用getche 和 getch
int main()
{
    
    
    // getchar 輸入者輸入一字元，按下enter後才會被變數讀取
    // putchar 則是輸出, 也可以用printf

    // char ch;
    // ch = getchar();

    // putchar(ch);
    // putchar('\n');

    // getche 會顯示出在螢幕上
    // getch 不會顯示出在螢幕上

    char ch2;
    printf("input a char:");
    ch2 = getche();
    printf("\tyou are typing: %c\n", ch2);
    
    
    printf("input a char:");
    ch2 = getch();
    printf("\tyou are typing: %c\n", ch2);



    


    return 0;
}
