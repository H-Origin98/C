#include <stdio.h>

# define PI 3.14159

int main(void)
{
    float area ,circum,ridius;
    printf("what is the radius of your pizza ?\n");
    scanf("%f",&ridius);
    area=PI * ridius*ridius;
    circum=2 * PI * ridius;
    printf("your basic pizza parameters are as follows:\n");
    printf("cirunmference =% 1.2f, area= %1.2f \n",circum,area);
    return 0;
}