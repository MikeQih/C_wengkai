#include <stdio.h> //15:00pm
int main(int argc, char const *argv[])
{   //p117-120重看 没懂 位运算
    /*
    & 按位与
    | 按位或
    ~ 按位取反
    ^按位的异或

    << 左移: eg. i<<j, i中所有的位向左移动j个位置，而右边填入0;
    eg.x<<=1等价于x*=2; x<<=n等价于x*=2^n
    >> 右移 管符号位，左移不管
    */

    /*
    hlL
    hh 单个字节
    h short
    l long
    ll long long
    L long double
    */

    unsigned char c = 0xAA;
    printf(" c=%hhx\n",c);
    printf("~c=%hhx\n",(char)~c);
    printf("-c=%hhx\n",(char)-c);
    printf("r=%hhx\n",(char)(5|4));

    //19:10pm
    int number = 0xaaa;
    unsigned mask = 1u<<31;
    for (; mask; mask>>=1)
    {
        printf("%d",number&mask?1:0);
    }
    
    printf("%d\n",number&mask); //&按位与

    //位段 没听懂p120

    return 0;
}
