#include <stdio.h>
int gAll = 12; 
int b = gAll;
//全局变量 如函数内部存在与全局变量同名的变量，则全局变量被隐藏
//只能用编译时刻已知的值来初始化全局变量，初始化发生在main函数前

void f(void){
    static int all = 1;
    //函数离开时，静态本地变量会继续存在并保持其值
    //静态本地变量的初始化只会在第一次进入这个函数时做，以后进入函数时会保持上次离开时的值
    all+=1;
    printf("static all = %d\n",all);
}
int main(int argc, char const *argv[])
{
    // b+=1;
    // printf("b=%d\n",b);
    printf("%s\n",__func__);//当前函数的名称
    printf("%d\n",gAll);//全局变量默认为0

    f();
    f();
    f();

    /*
    全局变量：全局生存期，全局作用域
    静态本地变量：全局生存期，函数内的本地作用域（本地可访问）
    实际上就是特殊的全局变量
    */

    //最好的做法是返回传入的指针，而不是变量的地址
    return 0;
}
