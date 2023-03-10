#include <stdio.h>

//1
struct date 
{
    int year;
    int month;
    int day;
};
//2 只是定义了两个变量
// struct{
//     int x;
//     int y;
// }p1,p2;

//3
// struct data{
//     int year;
//     int month;
//     int day;
// }p1,p2,p3;

int main(int argc, char const *argv[])
{
    struct date today; // or: struct date today = {2022,12,29};
    today.year = 2022; //用结构变量today才能访问数据，不能用结构类型访问数据
    today.month = 12;
    today.day = 29;
    printf("Today is %i-%i-%i\n",
    today.year,today.month,today.day);

    struct date thismonth = {.month=7, .year=2023};
    printf("This month is %i-%i-%i\n",
    thismonth.year,thismonth.month,thismonth.day);
    
    struct date copy_thismonth;
    copy_thismonth = thismonth;
    printf("Copy_thismonth is %i-%i-%i\n",
    copy_thismonth.year,copy_thismonth.month,copy_thismonth.day);

    struct date mybirthday = (struct date){2003,10,14};
    printf("Mybirthday is %i-%i-%i\n",
    mybirthday.year,mybirthday.month,mybirthday.day);

    struct date *MB = &mybirthday; //*MB表示地址里的数据，&表示数据存放的地址
    printf("Address of MB is %p\n",MB);
    MB->month = 9; // == (*MB).month=12;
    printf("New MB month = %d\n",MB->month);
    printf("%d\n",MB==*&MB);
    /*结构运算 (数组无法做这两种运算)eg.
    p1 = (struct point){5,10};
    相当于p1.x=5,p1.y=10;

    p1=p2
    相当于p1.x=p2.x;p1.y=p2.y;
    */

    //看到p102
    return 0;
}
