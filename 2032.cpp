#include <iostream>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    
    printf("%d=", n);
    bool first = true;
    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            int t = n;
            while (t % i == 0) {
                if (first) {
                    printf("%d", i);
                    first = !first;
                } else {
                    printf("*%d", i);
                }
                t /= i;
            }
        }
    }
    
    return 0;
}