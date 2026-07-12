#include <iostream>
using namespace std;

int main()
{
    double x; int n; cin >> x >> n;
    
    // (x^(n+1) - 1) / (x - 1)
    double t = x;
    for(int i = 1; i <= n; i++) t *= x;
    
    double ans = 0;
    if (x == 1) ans = n + 1.0;
    else ans = (t - 1) / (x - 1);
    
    printf("%.2f\n", ans);
    
    return 0;
}