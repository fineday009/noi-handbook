#include <iostream>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int ans = 0;
    for (int i = m; i <= n; i++) {
        if (i % 17 == 0) ans += i;
    }
    printf("%d\n", ans);
    return 0;
}