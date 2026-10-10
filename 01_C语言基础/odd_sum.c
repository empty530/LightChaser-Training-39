#include <stdio.h>
int main()
{
    int sum = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0) // 判断是否为奇数
        {
            sum += i; // 累加奇数
        }
    }
    printf("从1到100的所有奇数的和为: %d\n", sum);

    return 0;
}