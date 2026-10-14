#include <iostream>
using namespace std;

/**
 * 1397：简单算术表达式求值

时间限制: 1000 ms         内存限制: 65536 KB
提交数:50629    通过数: 36359
【题目描述】
两位正整数的简单算术运算（只考虑整数运算），算术运算为：

+，加法运算；

-，减法运算；

*，乘法运算；

/，整除运算；

%，取余运算。

算术表达式的格式为（运算符前后可能有空格）：

运算数 运算符 运算数

请输出相应的结果。

【输入】
一行算术表达式。

【输出】
整型算数运算的结果（结果值不一定为2位数，可能多于2位或少于2位）。

【输入样例】
32+64
【输出样例】
96
 */

int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    // scanf("%d", &a); scanf("%c", &op); scanf("%d", &b);
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        case '%':
            printf("%d\n", a % b);
            break;
        default:
            puts("never happen");
    }

    return 0;
}