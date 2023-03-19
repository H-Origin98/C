//02_03--使用多个函数的程序。
#include <stdio.h>

/*
函数的原型声明 又叫函数声明。（返回值+函数名+（参数））第一个void表明函数的返回值--无；butler 表示函数调用；（）表示函数的参数
C标准建议，要为程序中所有用到的函数提供函数的原型。
*/

void butler (void); //函数声明
int main(void)//C的惯例是把main放在开头，因为它提供了程序的基本框架。
{
    printf("I will summon the bulter function.\n");
    butler();//调用函数
    printf("yes. Bring me some tea and writeable DVDs.\n");

    return 0;

}

//函数定义
void butler (void)
{
    printf("you rang,sir?\n");
}