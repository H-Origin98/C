/*03_01.c -- your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight,value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    /*获取用户的输入*/
    scanf("%f",&weight);
    /*假设白金的价格是每盎司$1700*/
    //14.5833用于把英镑常盎司转换为金衡盎司
    value=1700*weight*14.5833;
    printf("Your weight in platiunm is worth $%.2f.\n",value);
    printf("You are easily worth that ! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");


    return 0;
} 