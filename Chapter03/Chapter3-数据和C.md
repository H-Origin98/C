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

   5.**scanf("%f",&weight);**

​	  Scanf用于用户的输入。%f表示用户输入的数据类型；&表示取地址。将用户存入的数据放到&后面跟的变量中。





