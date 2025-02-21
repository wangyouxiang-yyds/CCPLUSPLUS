#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
   
    char grade;
    printf("please inpua a operator Ex(3+2)");
    scanf("%c", &grade);

    switch (grade)
    {
        // 可使用a 或 A 來當作兩個選擇
        case 'a':
        case 'A':
            printf("Excellent\n");
            break;
        case 'b':
        case 'B':
            printf("Good\n");
            break;
        case 'c':
        case 'C':
            printf("OK\n");
            break;
        case 'd':
        case 'D':
            printf("NO Good\n");    
            break;
        default:
            printf("You're terrible");
            break;
    }
    return 0;
}
