#include <stdio.h>
#include <math.h>
int main()
{
    
    //输出前五十个素数
    /*int x=1;
    int cnt=0;
    while(cnt<10){
        int isPrime = 1;
        for (int i = 2; i < x; i++){
            if(x%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            cnt++;
            printf("%d\t",x);
            if(cnt%5==0){
                printf("\n");
            }
        }
        x++;
    }*/


    //整数正序分解
    /*
    int x;
    x = 15;
    int mask=1;
    int cnt=0;
    int t = x;

    while (t>9){
        t/=10;
        mask*=10;
    }
    // printf("mask=%d\n",mask);

    int digit=0;
    while (mask>0){
        digit = x / mask; //1
        printf("%d ",digit);
        // printf("mask=%d ",mask);
        x %= mask;
        mask/=10;
    }
    */

    /*
    int i,j;
    i=1;
    while(i<=9){
        j=1;
        while(j<=i){
            printf("%dx%d=%d\t",j,i,i*j);
            // if(i*j<10){
            //     printf("   ");
            // }
            // else{
            //     printf("  ");
            // }
            j++;
        }
        i++;
        printf("\n");
    }
    */

    //求a的连续和 eg:a=2,n=4,2+22+222+2222=2468
    int a,n;
    a = 2;
    n = 4;
    int sum = 0;
    int i;
    int t=0;
    for(i=0;i<n;i++){
        t = t*10+a; //
        sum+=t;
    }
    printf("sum = %d\n",sum);

    printf("%f\n",fabs(-1.3)); //b站看到p56
    return 0;
}
