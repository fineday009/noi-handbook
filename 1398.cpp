#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double ans = 0.0;
    while (n--) {
        int t; cin >> t;
        ans += (t / 70) * 0.1 + ((t % 70) != 0 ? 1: 0) * 0.1;
    }
    printf("%.1f\n", ans);

    return 0;
}