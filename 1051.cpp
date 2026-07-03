#include <iostream>
using namespace std;

int main()
{
    double x; cin >> x;
    double ans;
    if (x >= 0 && x < 5) ans = -1 * x + 2.5;
    else if (x >= 5 && x < 10) ans = 2 - 1.5 * (x - 3) * (x - 3);
    else ans = x / 2.0 - 1.5; // 偷懒一下懒得判断了
    
    printf("%.3f\n", ans);
    
    return 0;
}