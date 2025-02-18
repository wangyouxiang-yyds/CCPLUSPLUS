#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float num1 = 123.45F;
    float num2 = 4.56E-3F;

    printf("num1 = %e\n", num1); // 以指數型態印出num1 的值
    printf("num2 = %f\n", num2); // 以符點數的型態印出num2的值

    // float vs double
    float num3 = 123.456789012345F;
    double num4 = 123.456789012345;

    printf("num3 = %16.12f\n", num3);
    printf("num4 = %16.12f\n", num4);



    return 0;
}
