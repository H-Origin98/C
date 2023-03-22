# include <stdio.h>
int main (void)
{
    unsigned int un=3000000000;
    short end =200;
    long big=65537;
    long long veryBig=12345678908642;

    printf("un=%u and not %d \n",un,un);//unsigned 类型打印需要用%u，不可以用%d
    printf("end=%hd and %d \n",end ,end);//short 类型在int范围内。所以%hd和%d都可以打印。
    printf("big=%ld and not %hd \n",big,big);//long int 类型的需要用%ld。
    printf("veryBig=%lld and not %ld\n",veryBig,veryBig);//long long int 类型的需要用%lld

    //获取数据类型占用的字节
    /*
    size of long big=8
    size of long long big=8
    size of short=2
    size of unsigned=4
    size of int=4
    */
    printf("size of long big=%zd\n",sizeof(long int));
    printf("size of long long big=%zd\n",sizeof(long long int));
    printf("size of short=%zd\n",sizeof(short int));
    printf("size of unsigned=%zd\n",sizeof(unsigned int));
    printf("size of int=%zd\n",sizeof(int));
    return 0;
}