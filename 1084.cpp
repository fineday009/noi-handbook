#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
        if (ans > 1000) ans %= 1000;
    }
    printf("%03d\n", ans);
    return 0;
}