/*
 一年有3.156e7秒，编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/
#include <stdio.h>
#define seconds_per_year 3.156e7 //符号常量



int main (void)

{
    int age;
    double age_to_seconds;



    printf("please enter your age:");
    scanf("%d",&age);
    age_to_seconds= age * seconds_per_year;
    printf("age %d to seconds is %e ",age ,age_to_seconds);

    return 0;
}