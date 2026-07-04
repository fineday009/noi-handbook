#include <iostream>
using namespace std;

int main()
{
    int n, j1, j2; cin >> n >> j1 >> j2;
    double jData = j2 * 1.0 / j1;
    
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        double tryData = b * 1.0 / a;
        if (tryData > 0.05 + jData) puts("better");
        else if (tryData < jData - 0.05) puts("worse");
        else puts("same");
    }
    
    return 0;
}