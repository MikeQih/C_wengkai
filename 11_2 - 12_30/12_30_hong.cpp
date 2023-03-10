#include <stdio.h>
//只是为了让编译器知道printf函数的原型，保证调用时给出的参数值是正确的类型

#include "max.cpp"
//导入自定义库需要“ ”,要求编译器先在当前目录寻找这个文件，如果没有，再到编译器指定的目录去找
//<>用于编译器找自己的标准库的头文件
#include "max.h"//头文件
//看怎么在vscode c里创建项目，所有都可以访问？不用include max.cpp？
#include "min.h"

#define PI 3.14159 //PI是宏的名字，3.14159是宏的值
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f\n",PI);\
            printf("%f\n",PI2)
//带参数的宏的原则：一切都要括号，整个值要括号，参数出现的每个地方都要括号
#define cube(x) ((x)*(x)*(x))
#define MIN(a,b) ((a)>(b)?(b):(a))
#define toString(str) #str //存疑 可以在下面直接输入东西？

// int max(int a,int b);

int main(int argc, char const *argv[])
{
    
    // #开头的是编译预处理指令，它们不是C语言成分，但C语言离不开它们
    // #define用来定义一个宏
    printf(FORMAT,PI2*3.0);
    PRT;
    printf("%s;%d\n",__FILE__,__LINE__); //预定义宏
    printf("%s;%s\n",__DATE__,__TIME__); //13:10

    printf("%d\n",cube(5+2+1));
    printf("%d\n",MIN(5,22));
    printf("%s\n",toString(asmm)); //双# (存疑)

    int a=5;
    int b=6;
    // int c = max(a,b);
    printf("c jiagou : %f\n",max(gAll,b));

    //在函数前加static就使得它成为只能在所在的编译单元中被使用的函数
    //在全局变量前加上static就使得它成为只能在所在的编译单元中被使用的全局变量
    return 0;
}
