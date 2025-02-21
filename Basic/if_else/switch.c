#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

    // 一般switch
    int a, b;
    char oper;
    printf("please inpua a operator Ex(3+2)");
    scanf("%d %c %d", &a, &oper, &b);

    switch (oper)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d\n", a, b, a / b);
        break;
    
    default:
        printf("Sorry can't regornize the sentence");
        break;
    }
    return 0;
}
