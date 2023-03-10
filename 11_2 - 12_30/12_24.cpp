#include <stdio.h>
int main()
{
    int num = 70;
    int pass = 60;
    if (num >pass){
        printf("You pass");
    }    
    else {
        printf("You fail");
    }

    //True 1, False 0
    // printf("%d",7>=3+4); 
    //关系运算符的优先级比算术运算的低，但比赋值运算的高
    //==和!=的优先级比其他的低

    //注释，/* */注释

    int hour1,minute1,hour2,minute2;
    // printf("请输入两个时间：");
    // scanf("%d %d",&hour1,&minute1);
    // scanf("%d %d",&hour2,&minute2);
    // int h = hour2-hour1;
    // int m = minute2-minute1;
    // if (m<0){
    //     m = 60+m;
    //     h--;
    // }
    // printf("Time difference is: %dh, %dmin",h,m);

    // int a=0;
    // switch(a){ //看到p31
    //     case 1:
    //         printf("hao");
    //         break;
    //     case 2:
    //         printf("buhao");
    //         break;
    //     case 3:
    //         printf("woj");
    //     case 4:
    //         printf("saldj");
    //     default:
    //         printf("mike");
    // }

    printf("\n");
    //比较3个数哪个最大
    int a=10;
    int b=5;
    int c=20;
    int max = 0;
    if (a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if (b>c){
            max = b;
        }
        else{
            max = c;
        }
    }
    printf("%d",max);
    
    return 0; 
    
    
}
