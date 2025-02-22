// 若體重大於90KG印出過重否則不會過重


#include<stdio.h>

int main()
{
    int num;
    
    while(scanf("%d", &num) != EOF)
    {
        if (num >90) printf("Overweight\n");
        else printf("No overweight\n");


    }
    return 0;
}
