#include <stdio.h>
int main()
{
    // char word[] = {'H','e','l','l','o','\0'};
    // 0 标志字符串的结束，不是字符串的一部分
    // 0（可能会是4个字节）或'\0'(一个字节 推荐)是一样的，但和'0'(是个字符，是人可以读到的0，ascii中的)不同
    // printf("%s\n",word);
    //字符串以数组形式存在，以数组或指针的形式访问

    // const char *str = "Hello"; //指针叫str,指向了一个字符数组，里面放的内容是“Hello"
    // printf("%s\n",str);

    // char *str2 = (char*)"Hello"; //问！bad solution?
    // printf("%s\n",str2);

    // char word2[] = "Hello";
    // word2[0] = 'B';
    // printf("%c\n",word2[0]);

    // char line[10] = "Hello"; //数组大小是10个字节，往里面放了5个字符，占据6个字节的位置(结尾有个0) 
    // printf("%s\n",line);

    // printf("miek""mikezuishai");//自动连接两个字符串(\也可)
    // 构造一个字符串 用数组；处理一个字符串 用指针 10:30am
    
    //%s读到空格 tab或回车为止
    // char word3[8]; //只能放7个character的东西，结尾有个0，越界会产生后果
    // char word4[8];
    // printf("input 7 characters: ");
    // scanf("%7s",word3); //最多读7个,多的就给下一个了
    // scanf("%7s",word4); 
    // printf("%s##%s##\n",word3,word4);

    //空字符串
    // char buffer[100]=""; //数组长度100
    // printf("%d\n",buffer[0]=='\0');

    // char *t=(char*)"title";
    // char *s;
    // s=t;
    // printf("%s\n",s);

    //char a[][10] means eg. a[0]=world\0
    // char a[][10] = {
    //     "hello",
    //     "world",
    //     "skdhkaks"
    // };
    // printf("%s\n",a[0]); //a[0]相当于char*

    // const char *a1[] = {
    //     //char *a1[] means eg. a[0]指向外面某处写着world\0的东西
    //     //每个单元长度没有限制了
    //     "Jan","Feb","Mar","Apr"
    // };
    // int month;
    // printf("Enter a month: ");
    // scanf("%d",&month);
    // printf("%s\n",a1[month-1]); //a[0]相当于char*
    
    //int putchar(int c); 向标准输出中写一个字符，返回写出了几个字符(int)，EOF(-1)表示写失败(end of file)
    //int getchar(void); 从标准输入读入一个字符，返回类型是int是为了返回EOF(-1);输入Ctrl+C 强制结束；Ctrl+Z/D windows,Unix返回EOF

    // int ch;
    // while((ch = getchar()) !=EOF){//按什么都停不下来？？
    //     putchar(ch);
    // }
    printf("mas\n");
    
    return 0;
}
