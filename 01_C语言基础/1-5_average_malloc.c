#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    //赋值malloc
    srand(time(NULL));
    
    int n=rand()%30+1;
    printf("长度为%d\n",n);
    
    
    //分配数组
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }

    //赋值
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
        printf("第%d个数为%d\n",i+1,arr[i]);
    }

    //求平均数
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    printf("平均数为%f\n",sum/n);

    free(arr);

    return 0;
}