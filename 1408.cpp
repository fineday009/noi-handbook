//求11到n之间（包括n），既是素数又是回文数的整数有多少个。
//一个大于11小于1000的整数n。
//11到n之间的素数回文数个数。
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= n/i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isHuiwen(int n)
{
    if (n <= 99) return (n % 10) == (n / 10);
    return (n % 10) == (n / 100);
}

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 11; i <= n; i++) {
        if (isPrime(i) && isHuiwen(i)) ans++;
    }
    printf("%d\n", ans);

    return 0;
}