#include <iostream>
using namespace std;
int t[10000];

bool isPrime(int n)
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;

    int cursor = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) t[cursor++] = i;
    }

    for (int i = 0; i < cursor - 1; i++) {
        if (t[i + 1] - t[i] == 2) printf("%d %d\n", t[i], t[i + 1]);
    }

    return 0;
}

