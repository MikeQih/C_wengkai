#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t mylen(const char* s){
    int idx = 0 ;
    while(s[idx]!='\0'){
        idx++;
    }
    return idx;
}

int mycmp(const char* s1, const char* s2){ //移动指针
    printf("before while *s1 = %d\n",*s1); //s1[1]=98
    printf("before while *s2 = %d\n",*s2); 
    while(*s1==*s2 && *s1!='\0'){
        s1++;
        printf("*s1 = %d\n",*s1);
        s2++;
        printf("*s2 = %d\n",*s2);
    }
    return *s1-*s2;
}

char* mycpy(char* dst, const char* src){
    char* ret = dst;
    while(*src){
        *dst++ = *src++;
    }
    printf("*dst = %d\n",*dst);
    // *dst= '\0';//也可以去掉？
    return ret;

}

int main(int argc, char const *argv[])
{
    //strlen 返回字符串的长度
    char line[] = "hello";
    printf("strlen=%lu\n",strlen(line));
    printf("strlen=%lu\n",mylen(line));
    
    //strcmp 比较两个字符串 0:s1==s2; 1:s1>s2; -1:s1<s2
    //int strcmp(const char *s1,const char *s2);
    //安全版本：（eg. n=3就只判断前三个)
    //int strncmp(const char *s1,const char *s2, size_t n);
    char s1[]="abc";
    char s2[]="aBc";
    // printf("%d\n",strcmp(s1,s2));
    // printf("%d\n",'a'-'A');
    printf("%d\n",mycmp(s1,s2));

    //strcpy 把src的字符串拷贝到dst (把第二个参数里表达的字符串拷贝到第一个参数所表达的空间里)
    //char* strcpy(char *restrict dst,const char *restrict src);
    //安全版本：
    //char* strncpy(char *restrict dst,const char *restrict src, size_t n);
    //restrict 表明src和dst不重叠
    //返回dst
    printf("%s\n",strcpy(s1,s2));
    printf("%s\n",mycpy(s1,s2));

    //复制一个字符串
    // char *dst = (char*)malloc(strlen(src)+1);//结尾有个'\0'
    // strcpy(dst,src);

    //14:01pm
    //strcat 把s2拷贝到s1的后面，接成一个长的字符串，返回s1，s1必须有足够的空间
    //char* strcat(char *restrict s1,const char *restrict s2);
    //安全版本：（能够cat多少个字符，多了就删掉）
    //char* strncat(char *restrict s1,const char *restrict s2, size_t n);
    printf("strcat(s1,s2) = %s\n",strcat(s1,s2));

    //字符串搜索字符
    //char* strchr(const char *s,int c); 从左到右，找字符串中c第一次出现的位置，返回指针
    //char* strrchr(const char *s,int c); 从右到左，两个函数没找到就返回NULL
    char ss[] = "hello";
    char *p = strchr(ss,'l');
    // p=strchr(p+1,'l'); 第二个l
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(ss)+1);
    strcpy(t,ss); //要了l前面的，恢复就把ss换成p，把*p='\0'注释掉
    printf("t = %s\n",t);
    free(t);

    //字符串中找字符串 (忽略大小写进行寻找)
    //char* strstr(const char *s1,const char *s2);
    //char* strcasestr(const char *s1, const char *s2);
    
    return 0;

}
