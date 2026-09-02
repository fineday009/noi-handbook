#include <iostream>
using namespace std;
// 所有的既是回文数又是素数的三位数。一个数一行。

bool is3WHuiWen(int n)
{
    int a = n / 100, c = n % 10;
    return a == c;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    for (int i = 101; i <= 999; i++) {
        if (is3WHuiWen(i) && isPrime(i)) printf("%d\n", i);
    }

    return 0;
}