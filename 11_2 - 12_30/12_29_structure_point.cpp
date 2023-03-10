#include <stdio.h>

struct point
{
    int x;
    int y;
};
/* //version 1
struct point getStruct(void){
    struct point pnew;
    printf("Enter p.x and p.y: ");
    scanf("%d %d",&pnew.x,&pnew.y);
    printf("Get struct: p.x = %d, p.y = %d\n",pnew.x,pnew.y);
    return pnew;

}
void output(struct point p){
    printf("Output: p.x = %d, p.y = %d\n",p.x,p.y);
}

int main(int argc, char const *argv[])
{
    struct point y = {0,0};
    y = getStruct();
    output(y);
    
    return 0;
}
*/

//version 2

struct point* getStruct(struct point *p){
    printf("Enter p.x and p.y: ");
    scanf("%d %d",&p->x,&p->y);
    //->表示指针所指的结构变量中的成员
    //eg (*p).month=12; == p->month=12;
    printf("Get struct: p.x = %d, p.y = %d\n",p->x,p->y);
    return p;
};

void output(struct point p){
    printf("Output: p.x = %d, p.y = %d\n",p.x,p.y);
}

void print(const struct point *p){//*p就是指针，传一个结构不如传入它的指针
    printf("%d, %d\n",p->x,p->y);
}

int main(int argc, char const *argv[])
{
    struct point y = {0,0};
    getStruct(&y);
    output(y);
    // printf("*getStruct = %p\n",getStruct(&y));
    output(*getStruct(&y));
    //getStruct返回的是个指针，所以用*取出返回的东西
    print(getStruct(&y));
    return 0;
}

