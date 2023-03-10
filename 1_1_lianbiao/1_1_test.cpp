#include <stdio.h>
#include "node.h"
#include <stdlib.h>

typedef struct _list
{
    Node* head;
    //Node* tail;
}List;

void add(List* pList, int number);
void print(List* pList);
int main(int argc, char const *argv[])
{
    /*
    链表：带着数据的叫做结点，每个结点包含：数据和指针
    */

    // Node * head = NULL; //head是最开始的，NULL就说明整个linked list为空
    List list;
    list.head = NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&list,number);
        }
    }while(number!=-1);
    //链表的遍历
    print(&list);

    //找用户输入的
    printf("请输入你想查询的值：");
    scanf("%d",&number);
    Node *p;
    int isFound = 0;
    for ( p=list.head; p; p=p->next){
        if (p->value == number){
            printf("找到了\n");
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("没找到\n");
    }

    /*
    Node *q;//删除
    for ( q=NULL,p=list.head; p; q=p,p=p->next){
        if (p->value == number){
            if(q){
                q->next = p->next;
            }
            else{
                list.head = p->next;
            }
            free(p);
            break;
        }
    }
    */
    
    
    return 0;
}

void add(List* pList, int number)
{
    //add to linked list,首先要做个结构体出来
    Node *p = (Node*)malloc(sizeof(Node)); //Node的指针是用malloc得到的
    p->value = number;
    p->next = NULL;//新的一个要被放到后面的，(假设为最后一个)所以指向NULL
    //现在要让末尾的指针，指向新的这个
    //接下来需要找到最后那个
    Node *last = pList->head; //让last一开始等于头
    if(last){ //如果last不是NULL的话
        while(last->next){
            last = last->next;
        }
        last->next = p;//找到了最后的，把p->next等于NULL赋给它
        //然后接上去
    }
    else{
        pList->head = p; 
        //原来head什么都没指，当有了第一个后，让head指向第一个，然后再改第一个的next
    }
}

void print(List* pList){
    Node *p;
    for (p = pList->head; p; p=p->next)//只要p不是NULL 还存在，就继续
    {
        printf("%d\t",p->value);
    }
    printf("\n");
}