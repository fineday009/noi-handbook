#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    
    int ans = 0;
    for (int i = 2; i <= n / i; i++) {
        while (n % i == 0) {
            n /= i;
            if (prime(i)) ans = i;
        }
    }
    if (prime(n) && n > ans) ans = n;
    
    printf("%d\n", ans);
    return 0;
}