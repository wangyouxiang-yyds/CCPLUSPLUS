#include<stdio.h>
#include<stdlib.h>



int main(int argc, char const *argv[])
{
    char beep = '\a';
    printf("$c", beep); // 逼一聲

    // 印出"符號, 特殊符號前加個反斜線
    char ch = '\"';
    printf("%cWe are the World%c\n" , ch, ch);




    return 0;
}
