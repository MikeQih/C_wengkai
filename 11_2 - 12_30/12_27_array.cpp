#include <stdio.h>
#include <math.h>
int isPrime(int n, int a[], int num_of_known_prime){
    int ret=1;
    for (int i = 0; i < num_of_known_prime; i++)
    {
        if (n%a[i]==0)
        {
            ret = 0;
            break;
        }
    }
    return ret; 
}

int main()
{
    // int number[10]; // 类型 变量名称[元素数量]
    // // printf("%d\n",number[4]);
    // for (int i = 0; i < 10; i++)//初始化数组
    // { 
    //     number[i]=0; // or int number[10]={0}
    // }
    
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d=%d\n",i,number[i]);
    // }
    
    // const int n = 10;//length of array
    // int ls[n];
    // int x;
    // for (int i = 0; i < n; i++)
    // {
    //     ls[i]=0;
    // }
    
    // printf("Please enter a number [0,10]: ");
    // scanf("%d",&x);
    // while (x!=-1)
    // {
    //     if(x>=0&&x<=10){
    //         ls[x]++;
    //     }
    //     printf("Please enter a number [0,10]: ");

    //     scanf("%d",&x);
    // }
    // for (int c = 0; c < 10; c++)
    // {
    //     printf("%d出现的次数是%d\n",c,ls[c]);
    // }
    
    //或者 int a[10] = {[0]=2,[2]=3,6} 第0个值是2，第二个值是3，第三个值是6
    int a[10] = {[0]=2,[2]=3,6};
    for(int j=0;j<10;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    //数组的大小(length)：sizeof(a)/sizeof(a[0])

    /*
    int num[20]; //求20以内的素数
    int length = sizeof(num)/sizeof(num[0]);
    int i;
    for (i = 0; i < length;i++)
    {
        num[i]=1;
    }
    
    for (int k = 2; k< length; k++)
    {
        if (num[k])// 1
        {
            for (i = 2; i*k < length; i++)
            {
                num[k*i]=0;
            }   
        }
    }
    for (i = 2; i < length; i++)
    {
        if (num[i])
        {
            printf("%d ",i);       
        }
    }
    */

    //method2
    const int number = 10;
    int primels[number] = {2}; //有的prime list
    int count=1;
    int i = 3;
    while (count<number)
    {
        if (isPrime(i,primels,sizeof(primels)/sizeof(primels[0])))
        {
            primels[count++] = i;
        }
        i++;
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d ",primels[i]);
    } 

    return 0;
}
