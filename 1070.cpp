#include <iostream>
using namespace std;

int main()
{
    int x, n; cin >> x >> n;
    double ans = x;
    for (int i = 0; i < n; i++) {
        ans = 1.001 * ans;
    }
    printf("%.4f\n", ans);
    return 0;
}