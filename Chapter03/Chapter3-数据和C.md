# 03 数据和C

## 3.1 本章的第一个示例代码

```c
#include <stdio.h>
int main(void)
{
    float weight,value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    /*获取用户的输入*/
    scanf("%f",&weight);
    /*假设白金的价格是每盎司$1700*/
    //14.5833用于把英镑常盎司转换为金衡盎司
    value=1700*weight*14.5833;
    printf("Your weight in platiunm is worth $%.2f.\n",value);
    printf("You are easily worth that ! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
} 
```

1. **报错与警告：**

   Error 编译器是不能进行编译的；Warning 表示警告，警告不会终止编译。

2. **完成输入：**

   按下Enter表示确认。后续章节会讲解**非法输入**的解决方法。

3. **float weight,value;**

   浮点类型的变量声明。

4. **%f 以及%.2f**

   用于处理浮点类型数值。.2f表示处理时保留两位小数。

5. **scanf("%f",&weight);**

​	  Scanf用于用户的输入。%f表示用户输入的数据类型；&表示取地址。将用户存入的数据放到&后面跟的变量中。

## 3.2 变量与常量、数据类型的关键字

变量：在程序运行过程中会发生改变。

常量：在程序运行中没有发生变化。编译器通过书写类型来判断其数据类型。

C的数据类型

- int：整型
- long：长整型
- short：短整型
- unsigned：无符号的整形，打印时用%u。
- char：字符串
- float：浮点型
- double：
- long double：
- signed：
- void：
- _Bool
- _Complex:
- _Imaginary:

## 3.3 位、字节、和字

位、字节、字是描述计算机数据单元或存储单元的术语。这里主要指存储单元。

位：bit，最小的存储单元。可以存储0和1.（可以理解为开或关的状态。）位是计算机内存的基本构建块。

字节：byte，1byte=8bit。8位字节可以表示256种位。

字：word，是设计计算机给定的自然存储单位。

计算机字长越大，其数据转移越快。允许内存访问也更多。

## 3.4整型和浮点数

### 3.4.1整数

- 整型是没有小数部分的数。例如：-2，3，456等
- 在计算机中是以二进制存储。例如整数7，二进制表示为111.在8位字节中存储时，可以写成00000111。

### 3.4.2浮点型

- 浮点型和数学中实数的概念差不多。

- E的计数法：3.16*10^7 写成3.16E7

- 计算机中浮点数分成小数部分和整数部分是不同的地址。比如0.7E1小数部分是0.7，指数部分是1。float类型在储存时即按照 **符号位：+（占1个bit，小数部分：（十进制的小数部分转换成二进制的小数部分，占23bit）+指数部分（8bit）**

  以上涉及C语言中计算机对其数据类型的存储方式，是不同的。（后续可以见第15章节）

  浮点数存储时，会丧失大部分存储的精度。浮点数只能表示和2的幂相关的数字。
  
  

## 3.5C的基本数据类型-整型

### **3.5.1 int：整型**

int是计算机中有符号的整型；可以表示正整数、负整数、零。其取值-32768—32767（IOS C 规定）。目前的计算机是32位，所以整型的存储也应该是32位。目前的计算机正在向64位处理器发展，所以之后的整型也会可以存储更大的整数。

### **3.5.2声明int的变量**

-  	int +变量名

  * int a；

  * int a，b；

  * int a；

  * int b；

### **3.5.3变量如何获得值**

-  变量赋值。 如 a=5；

- 通过Scanf（）获得值。

### **3.5.4如何初始化变量**

- 初始化变量就是为变量赋一个初始值。在C中，初始化可以直接在声明中完成。只需要在声明的变量后加上赋值运算符和待赋给变量的值即可：（最好不要把初始化的变量和未初始化的变量放在一个声明中。）

  * int a =2；

  * int a=2，b=4；

### **3.5.5如何打印int值**

可以用printf（）函数打印int类型的值。%d指明了在一行中打印整数的位置。格式化字符串职工的每个%d都与待打印的变量列表相对应。即如有3个%d，后面的待打印值也必须要有3个。

```c
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
```

### **3.5.6八进制和十六进制**

通常C语言假定的整型数据都是十进制。然后很多时候我们会用到八进制和十六进制：

- 十六进制：在C语言中，用0x或者0X前缀表示。
- 八进制：在C语言中，用0前缀表示

无论如何，使用不同进制的数是为了方便。不会影响数字的存储形式。无论把数字写成何种进制，存储该数据的方式都是相同的。因为计算机内部都以二进制进行编码。

### **3.5.7显示不同进制的数据**

- 十进制：%d或者%#d（#可以把前缀显示出来）

- 十六进制：%x 或者%#x （#可以把前缀显示出来）

- 八进制：%o或者%#o （#可以把前缀显示出来）

  ```c
  #include <stdio.h>
  int main (void)
  {
      int x = 100;
      printf("dec=%d; octal=%o,hex=%x\n",x,x,x);
      printf("dec=%d; octal=%#o,hex=%#x\n",x,x,x);
  
      return 0;
  }
  ```

### **3.5.8其他的整数类型**

- short int ：占用的存储空间<=常规的int的存储空间。常用于较小数值的场合。有符号类型。
- long int ：占用的存储空间>=常规的int的存储空间。常用于较大数值的场合。有符号类型。
- long long int ：占用的存储空间>=long int的存储空间。常用于较大数值的场合。有符号类型。
- unsigned int： 只用于非负值的场合。在16位的unsigned 中0-65535。

###  3.5.9**使用多种整型的原因**

- 为了存储64位的整数，引入了long long 数据类型。现在的计算机上面常见的设置是：long long 占64位；long占32位，short占16位；int占16位或者32位。
- 我们首先考虑unsigned类型，当我们用于计数时。
- 非必要不使用long类型中。考虑程序的可以移植性，如果在long类型和int类型占用空间相同的机器上编写代码，实际需要使用32位的整数时，应该使用long类型而不是int类型。
- 如果确实需要64位的整数，应该使用longlong 类型。

### 3.5.10溢出类型

- C语言在打印数值时，如果数据的长度超出了该类型的范围，则会出现数据溢出的现象。并且C语言在编译时，不会报错。当其达到最大值时，会重新从起始点开始。在编程时，操作人员应该注意此类问题。

### 3.5.11如何打印 short 、long、long long 和unsigned

-  short ：%hd
- long：%ld
- long long：%lld 和%llu
-  unsigned：%u

```c
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
```





