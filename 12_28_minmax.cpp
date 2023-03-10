#include <stdio.h>
#include <stdlib.h>

void minmax(int a[],int len, int *min,int *max)
{
    int i;
    *min = *max = a[0];
    for (i = 0; i < len; i++)
    {
        if (a[i]<*min)
        {
            *min = a[i];
        }
        if (a[i]>*max)
        {
            *max = a[i];
        }
    }
}

int divide(int a, int b,int *result){
    int ret=1;
    if (b==0) ret = 0;
    else{
        *result = a/b;
    }
    return ret;
    
}
int main()
{
    // int a[] = {1,2,3,1,2,3,4,9};
    // int min,max;
    // //场景1是交换值 swap
    // //指针应用场景2：返回多个值，某些值只能通过指针返回，传入的参数是需要保存带回的结果的变量
    // minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    // printf("min=%d, max=%d\n",min,max);

    //应用场景2b 函数返回运算状态，结果通过指针返回
    //常用套路：让函数返回特殊的不属于有效范围内的值表示出错
    int a=5;
    int b=1;
    int c;
    if( divide(a,b,&c) ){
        printf("%d/%d = %d\n",a,b,c);
    }
    //往functon中传入数组作为参数=传入指针作为参数
    //函数参数表的数组实际上是指针，但可以用数组的运算符运算，对单个的元素需要用&取地址

    //数组变量是const（常量）的指针，所以不能被赋值
    // int a[] <==> int * const a =...
    //为了保护数组不被函数破坏，可设置参数为const eg. int sum(const int a[],int length);
    
    /*
    int i;
    const int* p1 = &i; 如果const在*的前面，表示指针所指的东西不能被修改
    int const* p2 = &i;
    int *const p3 = &i; const在*的后面，表示指针不可被修改
    */

    //13:51pm  
    char ac[] = {0,1,2,3,4,-1};
    char *p = ac;
    printf("mmike %d\n",*(p));
    // *p->ac[0]
    // *(p+1)->ac[1]
    printf("p = %p\n",p);
    printf("p+1 = %p\n",p+1);
    printf("*(p+1) = %d\n",*(p+1));
    
    // *p++ 取出p所指的那个数据来，然后把p移到下一个位置去
    while (*p!=-1){
        printf("%d\n",*p++);
    }
    //用null表示0地址
    /*
    指针用处：
    1.需要传入较大的数据时用做参考
    2.传入数组后对数组做操作
    3.函数返回不止一个结果；需要用函数修改不止一个变量
    4.动态申请的内存 malloc函数
    */
    
    
    return 0;
}
