#include <stdio.h> //10:10
void f(int *p){
    printf("p = %p\n",p);
    printf("p = %d\n",*p); //*p是个整数
    *p = 26; //改i的值
}
void g(int k){
    printf("k = %d\n",k);
}
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    /*
    int a[3][5]; //3行5列的矩阵,列数不能省略
    for (int i = 0; i < 3; i++)
    {
         for (int j = 0; j < 5; j++)
         {
            a[i][j] = i*j;
            printf("%d ",a[i][j]);
         }
         printf("\n");
    }
    printf("\n");
    
    int b[][5]={
        {1,2,3,4,5},
        {2,3,4,5,6}, //不加{}也行
    };
    for (int i = 0; i < 2; i++)
    {
         for (int j = 0; j < 5; j++)
         {
            printf("%d ",b[i][j]);
         }
         printf("\n");
    }
    */
    //scanf("%d",&i)里的&：获得变量的地址，它的操作数必须是变量
    //&不能对没有地址的东西取地址 eg.&(a+b) &(a++) &(++a)
    //%p输出地址 （32，64位？）

    //int *p = &i; p是个指针，指向int; 现在把i的地址交给p，p指向i
    //int* p,q; p是指针，指向int; q只是个普通int类型的变量
    //int *p,q 同上,想p和q都是指针，就都加*

    // int* p,q;
    // printf("%p\n",p);
    // printf("%d\n",q);

    // *是一个单目运算符，用来访问指针的值所表示的地址上的变量，
    // 可做右值，也可以做左值 eg. int k = *p;, *p = k+1;
    int i = 6;
    printf("&i = %p\n",&i);
    f(&i);
    g(i);

    int a =5;
    int b =6;
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}
