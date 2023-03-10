#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // int a = 120012213;
    // int c = 0;
    // c+=1;
    // a/=10;
    // while (a>0){
    //     c+=1;
    //     a/=10;
    // }
    // printf("%d",c);

    // srand(time(NULL));
    // int r = rand()%100; //随机三位数
    // printf("%d\n",r);

    // int num;
    // int count = 0;
    // int sum = 0;
    // printf("Please enter a number: ");
    // scanf("%d",&num);
    // while (num!=-1){
    //     sum += num;
    //     count++;
    //     printf("Please enter a number: ");
    //     scanf("%d",&num);
    // }
    // printf("%f",(1.0*sum/count));
    
    //多位逆序
    // int n = 1201;
    // int r = 0;
    // int digit;
    // while (n>0){
    //     digit = n%10;//个位
    //     r = r*10+digit;
    //     n/=10;
    // }
    // printf("%d\n",r);

    // int fact=1;
    // int n=3;
    // int i = n;
    // for (;n>1;n--){
    //     // printf("%d\n",n);
    //     fact *= n;
    // }
    // printf("%d",fact);

    //离开多重循环
    int x = 5;
    int one,two,five;
    int exit=0;
    for (one = 1; one<x*10; one++){
        for (two=1;two<x*10/2;two++){
            for (five=1;five<x*10/5;five++){
                if(one+two*2+five*5==x*10){
                    printf("可用%d个1角加%d个2角加%d个5角得到%d元\n",one,two,five,x);
                    // exit=1;
                    // break;
                    goto out;
                }
            }
            // if(exit){break;}
        }
        // if(exit){break;}
    }
out:
    return 0;
}
