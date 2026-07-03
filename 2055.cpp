#include <iostream>
using namespace std;

int main()
{
    double x; cin >> x;
    double ans = 0.0;
    if (x <= 20) ans += 1.68 * x;
    else {
        ans += 1.98 * x;
    }
    printf("%.2f\n", ans);

    return 0;
}