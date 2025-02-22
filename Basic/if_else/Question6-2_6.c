// 輸入兩個數字身高與體重，體重大於90公斤，且身高低於180公分 印出體重過重否則印出體重不會過重


#include<stdio.h>

int main()
{
    int weight, height;
    
    while(scanf("%d %d", &weight, &height) != EOF)
    {
        if  (weight > 90 && height < 180) printf("Overweight\n");
        else printf("No overweight\n");


    }
    return 0;
}
