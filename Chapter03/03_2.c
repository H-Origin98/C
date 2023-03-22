#include <stdio.h>
int main (void)
{
    int ten=10;
    int two=2;
    //正确写法
    printf("Doing it right:");
    printf("%d minus %d is %d\n",ten,2,two);

    //错误写法，在程序运行是程序会有警告。但程序会正常运行。
    printf("Doing it woring:");
    printf("%d ,minus %d is %d \n",ten);


    return 0;
}