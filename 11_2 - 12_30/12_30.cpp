#include <stdio.h>
struct point
{
    int x;
    int y;
}Date1;

typedef int time; //现在time就是int类型
typedef struct days{
    time month;
    time day;
}Date; 

struct rectangle{
    struct point p1;
    struct point p2;
};
void printRect(struct rectangle *r){
    //如有变量定义为： 
    //struct rectangle r,*rp;
    //rp = &r;
    //四种形式是等价的：r.pt1.x, rp->pt1.x, (r.pt1).x, (rp->pt1).x
    printf("<%d, %d> to <%d, %d>\n",r->p1.x, r->p1.y, r->p2.x, r->p2.y);
}

typedef union{
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, char const *argv[])
{
    //10:10
    struct rectangle rects[]={
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };// two rectangles
    
    // Date1.y = 20;
    // printf("Date1 y = %d\n",Date1.y);
    // for (int i = 0; i < 2; i++)
    // {
    //     printRect(&rects[i]);
    // }
    time a = 3;
    printf("%d\n",a);
    Date dates = {1,2}; 
    // struct days dates = {1,2};
    // Date == struct days
    printf("%d\n",dates.day);

    CHI chi;
    //用union的场合：可以得到一个int/double/float内部的各个字节
    //当要把一个整数以二进制方式写到一个文件里时
    int i;
    chi.i = 1234;
    
    for (i = 0; i < sizeof(int); i++)
    {
        printf("%02hhX",chi.ch[i]); //%02hhX 16个字节，不用做扩展了
        //00 00 04 D2 (0,1,2,3)，但因为计算机系统x86，是小端机器
        //所以是 D2 04 00 00 (0,1,2,3)
    }
    printf("\n");
    return 0;
}
