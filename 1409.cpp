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

int main()
{
    int x, y; cin >> x >> y;
    int ans = 0;
    for (int i = x; i <= y; i++) {
        if (isPrime(i)) ans++;
    }
    printf("%d\n", ans);

    return 0;
}