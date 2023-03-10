//头文件 max函数的声明（只有声明可放在头文件中（规则））

#ifndef _MAX_H_ //运用条件编译和宏，保证这个头文件在一个编译单元中只会被#include一次
// #ifndef _max_h_
#define _MAX_H_
// #define _max_h_
double max(double a, double b);
extern int gAll; //extern: 变量的声明
struct Node
{
    int value;
    char* name;
};

#endif

/*
声明是不可产生代码的东西：
函数原型，
变量，结构，宏，枚举，类型（声明）
inline函数

定义是产生代码的东西
*/