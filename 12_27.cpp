#include <stdio.h>
// #include <stdbool.h>

int sum(int begin, int end); //声明 函数原型

int main() //12:25
{
    //double scanf用%lf；float是%f;printf用%f或%e（科学计数法）
    double ff = 0.0045;
    printf("%.3f\n",ff);//? 0.004？

    printf("%e\n",(double)(7/6));
    
    /*
    c语言的类型：
    整数：char, short, int, long, long long
    浮点数：float, double, long double
    逻辑：bool
    指针
    自定义类型
    */
    printf("abc\rasd\n"); // \b回退到上一个位置, \r回车 把光标标到行首，\n换行
    
    // %o用于8进制, %x用于16进制
    //字符类型 char 'a'
    printf("%s\n","1");
    if(49 == '1'){
        printf("ok\n");
    }
    // int d;
    // scanf("%d",&d);
    // char i = d;
    // printf("int i = %d\n",i);
    // printf("char i = %c\n",i);

    printf("%d\n",'a'+'A'-'a'); // 小写变大写
    //'A'+'a'-'A' 大写变小写
    bool b = 6>5;
    printf("%d\n",b);

    //逻辑运算 !非 &&与 ||或
    //count = (count>20)? count-10: count+10
    //equals to: if count>20, then count=count-10; else: count=count+10

    //函数： eg. int isPrime(int i)

    int r =sum(1,10);
    printf("%d\n",r);
    printf("%d\n",sum(1,10)); 

    int ya;
    printf("ya=%d\n",ya);
    return 0;
}

int sum(int begin, int end) //定义 实际函数头
    {
        int i;
        int sum=0;
        for(i=begin;i<=end;i++){
            sum+=i;
        }
        return sum;
    }