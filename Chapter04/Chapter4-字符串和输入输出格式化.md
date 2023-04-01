# 04 字符串和输入输出格式化

## 4.1 本章的第一个代码示例

```c
//该程序演示与用户的交互
#include <stdio.h>
#include <string.h> //strlen()函数的原型
#define DENSITY 62.4 // 人体密度（单位：磅/立方英尺）
int main (void)

{
    float weight ,volume;
    int size ,letters;
    char name [40];//name是可以容纳40个字符的数组。

    printf("HI! What's your first name ?\n");
    scanf ("%s",name);//数组变量不需要&。
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
```

* **char name [40];**

  该案例中，用于存储字符串。在该程序中，用户输入的名被存储在数组中，该数组占用内存中的40个字节。每个字节存储一个字符值。

* **%s**

  用于处理字符串的输入和输出。

* **scanf（）与&**

  普通变量需要加&；数组变量不需要加&。

* **#define DENSITY 62.4** 

  字符常量，C语言中常量的定义方式。

* **strlen(name)**

  获取字符串的长度。

## 4.2 字符串简介

* 字符串：

  是一个或多个字符的序列。“XXXXXXXXXX”;双引号仅告知编译器它括起来的是字符串。是一个定界符。

* char 类型：

  在c语言中，字符串都被存储在char类型的数组中。

  空字符：

  空字符不是“0”，而是'\0'。即null character，是非打印字符，对应的ACSII值为0。C的字符串一定以空字符结束；这意味着，程序员在编程时，需要将定义的数组容量必须比待存储的字符串的字符多1。

  数组：

  是同类型的数据元素的有序序列。

  ![1680091229204](1680091229204.png)



* 使用字符串

```c
#include <stdio.h>

#define PRAISE "you are an extraordinary being."

int main(void)
{
    char name [40];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s .%s \n",name ,PRAISE);
    
    return 0;
}
```



* Strlen()函数



```c
#include <stdio.h>
#include <string.h>//包含strlen（）相关的函数原型。

#define PRAISE "you are an extraordinary being."

int main(void)
{
    char name [40];

    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s .%s \n",name ,PRAISE);
    printf("your name of %zd letters occupies %zd memory cells.\n",
        strlen(name),sizeof(name));//在逗号后面增加换行。可以增加代码的可读性。这种方法可以用于处理很长的printf（）语句。
    printf("The phrase of praise has %zd letters and occupies %zd memory cells\n",
        strlen(PRAISE),sizeof(PRAISE));
    return 0;
}
```

## 4.3 常量的和C预处理器

### 4.3.1.常量的定义方式

1. **define 常量名 值**

​			比如：# define TEX 0.15 //（表示将0.15赋值给了TEX）

   *    常量名用大写 

   *    值前面不能加任何符号。值可以是int 、float、char等类型

        ```c
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
        ```

        

2. **使用const关键字**

   比如：const int MONT=12;

* const是限定一个变量为只读变量。语法格式为：**const  数据类型 变量名 = 值**

3. **明示常量**

![image-20230401122737201](/Users/yuanjiehuang/Library/Application Support/typora-user-images/image-20230401122737201.png)



![image-20230401122755470](/Users/yuanjiehuang/Library/Application Support/typora-user-images/image-20230401122755470.png)

## 4.4 printf()与scanf()

### 4.4.1printf()函数

1. Printf()使用格式字符串和参数列表。
2. 转换说明及其打印的输出结果：

![image-20230401123944784](/Users/yuanjiehuang/Library/Application Support/typora-user-images/image-20230401123944784.png)

3. printf() 转换说明的修饰符

   ![image-20230401125101221](/Users/yuanjiehuang/Library/Application Support/typora-user-images/image-20230401125101221.png)

```c
# include <stdio.h>
# define PAGES 959

int main (void)
{

    printf("*%d*\n",PAGES);
    printf("*%d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);


    return 0;
}

//该程序输出
*959*
*959*
*       959*
*959       *
```

```c
# include <stdio.h>


int main (void)
{
 const double RENT = 3853.99;
printf("*%f*\n",RENT);
printf("*%e*\n",RENT);
printf("*%4.2f*\n",RENT);
printf("*%3.1f*\n",RENT);
printf("*%10.3f*\n",RENT);
printf("*%10.3E*\n",RENT);
printf("*%+4.2f*\n",RENT);
printf("*%010.2f*\n",RENT);
printf("*%a10.2f*\n",RENT);
    return 0;
}
//该程序输出
*3853.990000*
*3.853990e+03*
*3853.99*
*3854.0*
*  3853.990*
* 3.854E+03*
*+3853.99*
*0003853.99*
*aaa3853.99*
```

4. 转换说明的意义：

   把给定的值翻译成十进制整数文本，然后打印出来