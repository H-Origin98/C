// 02_02.c -- 把2英寻转换成英尺。
#include <stdio.h>
int main(void)
{
    int feet ,fathoms; //声明了两个变量

    fathoms=2;//赋值
    feet=6 * fathoms;//赋值，乘法运算

    printf("there are %d feet in %d fathoms!\n",feet,fathoms);//2个%d，双引号后的第一个变量代替双引号中的第一个%d，以此类推。
    printf("yes , i said %d feet!\n",6* fathoms);//双引号后的可以直接写变量，也可以直接写运算等。

    return 0;
}