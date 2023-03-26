/*
 编写一个程序。提示用户输入水的夸脱数，并显示水分子的质量。
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
#define MASS_PER_QUART 950
#define MASS_PER_MOLE 3.0e-23
int main (void)

{

    double quart ,molecules;

    printf("please enter the quart:");
    scanf("%lf",&quart);
    molecules=quart*MASS_PER_QUART/MASS_PER_MOLE;
    printf("%e quart include %e water molecules.",quart,molecules);

    return 0;



}