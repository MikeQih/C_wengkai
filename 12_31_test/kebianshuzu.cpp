#include <stdio.h> //12:15
#include "array.h"
#include <stdlib.h>
// typedef struct{
//         int *array;
//         int size;
// }*Array;
const int BLOCK_SIZE = 20;
Array array_create(int init_size)
{
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int)*(a.size));
    return a;
}
void array_free(Array *a){
    free(a->array);
    a->array = NULL;
    a->size = 0;
}
int array_size(const Array *a){
    return a->size;
}

int* array_at(Array *a, int index){//需要返回int的指针
    if(index>=a->size){
        array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return &(a->array[index]);
}

int array_get(const Array *a, int index){
    return a->array[index];
}

void array_set(Array *a, int index, int value){
    a->array[index] = value;
}

void array_inflate(Array *a,int more_size){
    int *p = (int*)malloc(sizeof(int)*(a->size+more_size));
    int i;
    for ( i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(int argc, char const *argv[])
{
    //p117-120重看 没懂 位运算

    //可变数组 resizable array
    //growable, get the current size, access to the elements
    Array a = array_create(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0) = 10;
    printf("%d\n",*array_at(&a,0));
    int cnt=0;
    int number = 0;
    while(number!=-1){
        scanf("%d",&number);
        if(number!=-1){
            scanf("%d",array_at(&a,cnt++));
        }
    }
    array_free(&a);

    //此方法花时间，且在内存受限的机器时很快就不能申请大的空间了

    /*
    所以引出链表：原来内存不动，只申请一个block大小的内存，把所有的链起来，
    一个block走完后，告诉你下一个block在哪，然后再去那个位置访问它。
    这样就不用copy，还能利用好内存的每个角落。
    */
    return 0; //10:21
}
