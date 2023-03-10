#include <stdio.h> //10:35
int main(int argc, char const *argv[])
{
    /*
    fopen:
    r 打开只读；r+ 读写，从文件头开始；w 只写，不存在则新建，存在则清空
    w+ 读写，不存在则新建，存在则清空；a 追加，不存在则新建，存在则从文件尾开始
    ..x 只新建，如果文件已存在则不能打开
    */
    FILE *fp = fopen("12_31.txt","r");
    if(fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }
    else{
        printf("Can not open the file!\n");
    }
    /*
    文本vs二进制
    文本：
    优点：方便人类读写，跨平台
    缺点：程序输入输出要经过格式化，开销大

    二进制：
    优点：程序读写快
    缺点：人类读写困难，且不跨平台 eg.int大小不一致，大小端的问题
    */

    /*
    二进制读写
    size_t fread(void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);
    第二个参数：size_t size表示内存有多大，size_t nitems表示有几个这样的内存
    nitem：用来说明这次读写几个结构变量，因为二进制的读写一般都是通过对一个结构变量的操作来进行的
    size_t fwrite(const void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);
    FILE指针是最后一个参数，返回的是成功读写的字节数
    */
    
    return 0;
}
