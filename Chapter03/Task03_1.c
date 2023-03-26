/*
 编写一个带有整数上溢、浮点数上溢、浮点数下溢问题的代码。
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)

{
    int the_biggest_int;
    the_biggest_int=INT_MAX;

    float the_biggest_float;
    the_biggest_float=FLT_MAX;

    float the_samllest_float=FLT_MIN;

    //整数的上溢
    printf("the_biggest_int= %d\n",the_biggest_int);
    printf("the_biggest_int +1 =%d\n",the_biggest_int + 1);

    //浮点数的上溢
    printf("the_biggest_float=%e\n,the_biggest_float*10=%e\n",
            the_biggest_float,the_biggest_float*10.0f);

    //浮点数的下溢

    printf("the_samllest_float=%e\n,the_samllest_float/100=%e\n",
            the_samllest_float,the_samllest_float/99.0f);
    





    return 0;
}