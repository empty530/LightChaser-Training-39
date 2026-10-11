#include <stdio.h>
int main()
{

    int a=10;
    int b=20;
    int*p1=&a;
    int*p2=&b;

    printf("交换前: a=%d, b=%d\n", a, b);

    //指针交换变量

    int temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("交换后: a=%d, b=%d\n", a, b);


    return 0;
}