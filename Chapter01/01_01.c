//学习C语言的第一个程序
#include <stdio.h>
int main(void)
{
    int dogs;
    printf("how many dogs do you have? \n");
    scanf("%d",&dogs);
    printf("so you have %d dog(s)!\n",dogs);

    return 0;
}