/*
编写一个程序，读取一个浮点数，先打印成小数点形式，然后再打印出指数形式。最后打印出P计数法。
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)

{
    float number;
    printf("Enter a floating-point value:");
    scanf("%f",&number);
    printf("fixed-point notation: %f\n",number);
    printf("exponential notation: %e\n",number);
    printf("p notation: %a\n",number);
    return 0;
}