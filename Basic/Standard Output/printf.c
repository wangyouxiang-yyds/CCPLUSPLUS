#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 25;
    printf("\"%d%%���ǥͨӦۤp�d�a�x\"\n", num);




    int num1 = 32, num2 = 1024;
    float num3 = 12.3478f;
    printf("num1 = %6d����\n", num1);
    printf("num2 = %-6d����\n", num2);
    printf("num3 = %6.2f����\n", num3);
    printf("num3 = %+6.2f����\n", num3);
    /*
        %6d => �]�t�p���I�@������(6�Ӧ��)
        %-6d => �]�t�p���I�@������(6�Ӧ��) �B �a��
        %6.2f => �]�t�p���I�@������(6�Ӧ��) �B�p���I���
        %+6.2f => �]�t�p���I�@������(6�Ӧ��) �B �p���I��� �M�ƭȥ��t����ܥX��
    */


    int demo1 = 12345;
    float demo2 = 123.456;

    printf("%10d\n", demo1);
    printf("%+d\n", demo1);
    printf("%09d\n", demo1);
    printf("%-10d\n", demo1);
    printf("% d\n", demo1);
    printf("%7.2f\n", demo2);
    printf("%010.3f\n", demo2);
    printf("%+10.4f\n", demo2);
    


    return 0;
}
