#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        double x, y; int nums; cin >> x >> y >> nums;
        ans += sqrt(x*x + y*y) * 2.0 / 50 + 1.5 * nums; 
    }
    
    printf("%d\n", (int)ceil(ans));
    
    return 0;
}