#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0, t = 1, j = 1;
    while (t <= n) {
        j *= t;
        ans += j;
        t++;
    }
    printf("%d\n", ans);
    return 0;
}