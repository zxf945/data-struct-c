#include<stdio.h>
// hello test
#define AA 2
#ifdef INITIALIZE
    int g=32
    static int init=1;
#else
    int g;
    static int init=0;
#endif
int aa = 0xff;
char bb = 'a';
short cc = 3;
static char dd = 'b';

typedef struct Person
{
    /* data */
    int age;
    int comming;
} Person;


void testFunc(){
    int b = 5;
    int a = 7;
    if (a>b)
    {
        printf("testFuncA");
    }else{
        printf("testFuncB");
    }
}

void test2(){
    int a;
    printf("a=%d",a);
    int c=a;
    printf("c=%d",c);
}

void test3(){
    int a;
    printf("a=%d,sizeof-a=%d",a,sizeof(a));
}

int hello(){
    printf("hello%d",AA);
    printf("aa=%d,bb=%d,dd=%d",aa,bb,dd);
    return 0;
}