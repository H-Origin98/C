//该程序演示与用户的交互
#include <stdio.h>
#include <string.h> //strlen()函数的原型
#define DENSITY 62.4 
int main (void)

{
    float weight ,volume;
    int size ,letters;
    char name [40];

    printf("HI! What's your first name ?\n");
    scanf ("%s",name);
    printf("%s, what's your weight in pounds? \n",name);
    scanf("%f",&weight);
    size= sizeof name ;
    letters=strlen(name);
    volume=weight/DENSITY;

    printf("Well, %s ,your volume is %2.f cubic feet.\n",
            name, volume);

    printf("Also ,your first name has %d lerrers,\n",
            letters);

    printf("and we have %d  bytes to store it .\n",
            size);

    return 0;
}