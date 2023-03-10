#include<stdio.h>
int main()
{
    // double foot;
    // double inch;
    // printf("请输入英尺和英寸：");
    // scanf("%lf %lf", &foot, &inch);
    // printf("身高是%f米。\n", (foot+inch/12)*0.3048);
    // return 0;

    // int hour1, minute1;
    // int hour2, minute2;
    
    // printf("请输入起始时间(h,m):");
    // printf("请输入最终时间(h,m):");
    // scanf("%d %d", &hour1, &minute1);
    // scanf("%d %d", &hour2, &minute2);
    // int t1 = hour1*60 + minute1;
    // int t2 = hour2*60 + minute2;
    // int t = t2-t1;
    // printf("时间差为%d小时%d分钟", t/60, t%60);

    // int a = 10;
    // printf("%d",a++);
    // printf("%d",++a);

    // int a = 5; //switch number
    // int b = 6;
    // int temp;
    // temp = b;
    // b = a;
    // a = temp;
    // printf("%d",a);
    // printf("%d",b);

    int x;
    printf("enter your profit: ");
    scanf("%d",&x);
    double amount = x*(1+0.033)*(1+0.033)*(1+0.033);
    printf("Your profit after 3 years is: %lf",amount);
    //看完p20了



}
