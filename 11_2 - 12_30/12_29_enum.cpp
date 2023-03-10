#include <stdio.h>
enum color{red,yellow,green,blue=6};
//套路：把NumCOLORS放在enum最后，就知道前面枚举里有多少个值
//就可以用NumCOLORS定义数组大小，也可以做遍历
void f(enum color c);
int main(int argc, char const *argv[])
{
    //enum, enum 枚举类型名字{name0,name1,...,namen};
    //eg. enum colors{red,yellow,green}, red=0,yellow=1,green=2
    enum color t = blue;
    f(t);
    printf("%d\n",t = yellow);
    return 0;
}
void f(enum color c){
    printf("%d\n",c);
}

