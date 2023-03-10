#include <stdio.h>
int main(int argc, char const *argv[])
{
    // %[flags][width][.prec][hlL]type
    printf("%+09d\n",123); //(占9个字符)
    printf("%-+9d\n",123);
    /*flag
    '-'左对齐
    ‘+’在结果前放个+或-
    0 填充
    (space)正数留空
    */

    printf("\n");
    printf("%9.2f\n",123.0);
    printf("%*.2f\n",7,123.0);
    /*
    width/prec
    * 下个参数是字符数
    .number小数点后的位数
    .*下个参数是小数点后的位数
    */

    printf("%hhd\n",(char)12345);
    //12345 16进制是0x3039，只取后面的39(就拿一个单元格的 两两一个格)，变成10进制，就是57
    printf("%9.2f\n",123.0);
    /*
    hlL
    hh 单个字节
    h short
    l long
    ll long long
    L long double
    */

    int num;
    printf("%d%n\n",12345,&num);
    printf("%d\n",num);
    /*
    type
    i or d：用于int
    u(unsigned int),o(八进制),x(十六进制),X(字母大写的十六进制)
    f or F: float,6; e or E：指数; g：float；G：float；a or A: 十六进制浮点
    c：char，s:字符串，p：指针，n：读入/写出的个数
    */



    // scanf: %[flag]type
    // int num2;
    // int i1 = scanf("%i",&num2); //scanf的返回值是读入的项目数
    // int i2 = printf("i2 = %d\n",num2); //printf的返回值是输出的字符数
    // printf("printf: %d:%d\n",i1,i2);
    //i1读到了1个2121，i2输出了 i2 = 2112\n 10个字符

    int num3;
    scanf("%*d%d",&num3);
    printf("i3 = %d\n",num3);
    /*
    flag:
    *：跳过；数字：最大字符数；hh：char；h：short；l：long,double
    ll:long long; L:long double

    type:
    d: int;i:整数(可能为十六进制或八进制)；u：unsigned int
    o：八进制；x：十六进制；a e f g：float；c：char；s：字符串(单词)
    [...]:所允许的字符；p：指针
    */
    return 0;
}
