#include <iostream>
using namespace std;

int main()
{
    int a, b, n; cin >> a >> b >> n;
    
    int q;
    for (int i = 1; i <= n + 1; i++) {
        q = a / b;
        a = 10 * (a - q * b);
        // printf("--%d %d\n", q, a);
    }
    printf("%d\n", q);
    
    return 0;
}