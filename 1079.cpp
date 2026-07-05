#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double ans = 0;
    int positive = 1;
    for (int i = 1; i <= n ; i++) {
        ans += (positive ? 1 : -1) * 1.0 / i;
        positive = !positive;
    }
    
    printf("%.4f\n", ans);
    return 0;
}