#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int s; cin >> s;

    int ans = 0x80000000;
    for (int i = 2; i < s - 1; i++) {
        int r = s - i;
        int t = i * r;
        if (isPrime(i) && isPrime(r) && t > ans) ans = t;
    }
    printf("%d\n", ans);

    return 0;
}