/*
 编写一个程序。要求用户输入一个ASCII值，然后打印输入的字符。
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)

{
        int ASCCII_number;
        printf("please enter a ASCII value (need enter int and the scope is 0-127 ):");
        scanf("%d",&ASCCII_number);
        printf("The value corresponding to %d is %c\n",ASCCII_number,ASCCII_number);

    return 0;
}