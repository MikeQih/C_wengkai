#include <stdio.h>
int main()
{
    // int a=0; //加法
    // int b=0;
    // printf("Please enter two integers: ");
    // scanf("%d %d",&a, &b);
    // printf("%d + %d = %d\n",a,b,a+b);
    // return 0;

    // int cm = 0; //inch换算
    // scanf("%d",&cm);
    // int foot = cm/30.48;
    // int inch = ((cm/30.48)-foot)*12;
    // printf("%d",foot);
    // printf("%d",inch);
    // return 0;

    // int st = 0; // 时间
    // int add = 0;
    // printf("Please enter the start time: ");
    // scanf("%d",&st);
    // printf("Please enter the add time: ");
    // scanf("%d",&add);
    // int sth = st/100; //hour
    // int stm = st%100; //min
    // int totalsm = sth*60+stm;
    // int totalfm = totalsm+add; //total final min
    
    // int fh = totalfm/60;
    // int fm = totalfm%60;
    // int finaltime = fh*100+fm;
    // printf("%d",finaltime);
    // return 0;

    //逆序三位数
    int num = 203;
    int hund = num/100;
    int ten = num/10%10;
    int gewei = num%100;
    printf("%d",gewei*100+ten*10+hund);

    //BCD
    //18 二进制：0001 0010，十六进制：0x12
    int s = 18;
    printf("Please enter a number ");
    scanf("%d",&s); //%d 以十进制
    printf("%x",s); //%x 以十六进制输出
    
    
}
