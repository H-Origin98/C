/*
 1英寸相当于2.54cm，编写一个程序提示用户输入身高（/英寸），然后以cm为单位显示身高。
*/
#include <stdio.h>
#define INCH_TO_CM 2.54

int main(void)

{
    double height_inch, height_cm;
    printf("please enter your height:");
    scanf("%lf", &height_inch);
    height_cm = height_inch * INCH_TO_CM;
    printf("so you height in inch is %f,and your height in cm is %f",
             height_inch, height_cm);
    

    return 0;
}