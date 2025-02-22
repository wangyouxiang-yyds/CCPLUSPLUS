// 判斷這三個角是否可以構成一個三角形


#include<stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && c + b > a){
            printf("this triangle\n");
    
        }
        else
        {
            printf("it can't be triangle\n");
        }
        
    }
    
    
}
