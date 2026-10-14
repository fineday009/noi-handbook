#include <iostream>
using namespace std;


bool isA(int n)
{
    int a = 0, b = 0;
    while (n) {
        int t = n % 2;
        if (t) a++;
        else b++;
        n /= 2;
    }
    if (a > b) return true;
    return false;
}

int main()
{
    int a = 0, b = 0;
    for (int i = 1; i <= 1000; i++) {
        if (isA(i)) a++;
        else b++;
    }
    printf("%d %d\n", a, b);

    return 0;
}

/**
 * 一行，包含两个整数，分别是A
类数和B
类数的个数，中间用单个空格隔开。
 */
/**
 * 
 * 若将一个正整数化为二进制数，在此二进制数中，我们将数字1
的个数多于数字0
的个数的这类二进制数称为A
类数，否则就称其为B
类数。

例如：

(13)10=(1101)2
，其中1
的个数为3
，0
的个数为1
，则称此数为A
类数；

(10)10=(1010)2
，其中1
的个数为2
，0
的个数也为2
，称此数为B
类数；

(24)10=(11000)2
，其中1
的个数为2
，0
的个数为3
，则称此数为B
类数；

程序要求：求出1∼1000
之中（包括1
与1000
），全部A
、B
两类数的个数。
 * 
 */