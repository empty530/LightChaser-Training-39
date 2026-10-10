#include <stdio.h>
int main()
{

    double a;
    double b;
    double result;
    char ope;

    
    

    //运算
    while(1)
    {
        //输入数字与运算符
        printf("请输入第一个数字: ");
        scanf("%lf", &a);
        printf("请输入运算符: ");
        scanf(" %c", &ope);
        printf("请输入第二个数字: ");
        scanf("%lf", &b);
        
        if (ope == '+')
        {
            result = a + b;
        }
        else if (ope == '-')
        {
            result = a - b;
        }
        else if (ope == '*')
        {
            result = a * b;
        }
        else if (ope == '/')
        {
            if(b==0)
            {
                printf("除数不能为零，请重新输入: ");
                scanf("%lf", &b);
                continue;
            }
            result = a / b;
        }
        else
        {
            printf("无效的运算符，请重新输入: ");
            scanf(" %c", &ope);
            continue;
        }

        printf("结果: %.2lf\n", result);
        
        // 询问用户是否继续计算
        int choice;
        printf("是否继续计算？(1: 是, 0: 否): ");
        scanf("%d", &choice);
        
        if (choice == 1)
        {
            continue; // 继续循环，重新输入数字和运算符
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("无效的选择，程序将退出。\n");
            break;
        }

    }

 return 0;
}