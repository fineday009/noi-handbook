#include <iostream>
using namespace std;
bool isPrime(int n);

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            ans++;
            // printf("%d\n", i);
        }
    }
    printf("%d\n", ans);

    return 0;
}

bool isPrime(int n) 
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}