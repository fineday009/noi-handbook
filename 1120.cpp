#include <iostream>
using namespace std;

int main()
{
    int n, i, j; cin >> n >> i >> j;
    for (int k = 1; k <= n; k++) printf("(%d,%d) ", i, k); puts("");
    for (int k = 1; k <= n; k++) printf("(%d,%d) ", k, j); puts("");
    
    for (int p = 1; p <= n; p++) {
        // (i - j) = (p - q)
        int q = p - i + j;
        if (q < 1 || q > n) continue;
        printf("(%d,%d) ", p, q);
    }
    puts("");
    
    for (int p = n; p >= 1; p--) {
        // i + j = p + q
        int q = i + j - p;
        if (q < 1 || q > n) continue;
        printf("(%d,%d) ", p, q);
    }
    
    return 0;
}